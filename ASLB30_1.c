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

int SearchFirstOcc(PNODE Head, int no)
{
    int iPos = 1;

    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            return iPos;
        }
        Head = Head->Next;
        iPos++;
    }

    return -1;
}

void Display(PNODE Head)
{
    printf("Elements of linked list are : ");

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
    int iPos = 0;

    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);

    printf("Enter the element to Search : ");
    scanf("%d",&iRet);

    iPos = SearchFirstOcc(First, iRet);

    if(iPos != 0)
    {
        printf("Element %d found at position : %d\n", iRet,iPos);
    }
    else
    {
        printf("Element %d not found in the linked list.\n", iRet);
    }

    return 0;
}