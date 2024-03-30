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

void InsertFirst(PPNODE Head,int no)
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

int Summation(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        iSum = iSum + (Head->Data);
        Head = Head->Next;
    }

    return iSum;
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

    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);

    iRet = Summation(First);
    printf("Summation is : %d\n",iRet);

    return 0;
}