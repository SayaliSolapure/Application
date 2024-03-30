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

void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ", Head->Data);
        Head = Head -> Next;
    }
    printf("NULL\n");
}

int DisplayMax(PNODE Head)
{
    int iNo = 0;
    int iCnt = 0;
    int iMax = 0;

    while(Head != NULL)
    {
        iNo = Head -> Data;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iNo > iMax) == 0)
            {
                iMax = iCnt;
            }
        }
        if(iMax == iNo)
        {
            printf("%d is maximum number.\n",iNo);
        }

        iMax = 0;

        Head = Head->Next;
    }

    return 0;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Display(First);

    DisplayMax(First);

    return 0;
}