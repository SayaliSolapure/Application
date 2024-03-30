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

int DisplaySum(PNODE Head)
{
    int iNo = 0;
    int iCnt = 0;
    int iSum = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
            Head = Head ->Next;
        }

        return iSum;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);

    DisplaySum(First);

    return 0;
}