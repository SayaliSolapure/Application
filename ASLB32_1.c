#include<stdio.h>

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

int DisplayReverse(PNODE Head)
{
    int iNo = 0;
    int iDigit = 0;
    int iReverse = 0;

    while(Head != NULL)
    {
        iDigit = iNo % 10;
        iReverse = (iReverse * 10) + iDigit;
        iNo = iNo / 10;
    }
    Head = Head->Next;

    
    return iReverse;
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

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Display(First);

    DisplayReverse(First);

    return 0;
}