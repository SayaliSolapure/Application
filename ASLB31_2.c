#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

int DisplayPrime(PNODE Head)
{
    int iNo = 0;
    int iCnt = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;

        for(iCnt = 1; iCnt <= iNo/2; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                break;
            }
        }
        if(iCnt == (iNo/2) + 1)
        {
            printf("%d is a prime number\n", iNo);
        }

        Head = Head->Next;
    }

    return 0;
}

void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ", Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,89);
    InsertFirst(&First,22);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    iRet = DisplayPrime(First);

    printf("Prime numbers are : %d\t",iRet);

    return 0;
}