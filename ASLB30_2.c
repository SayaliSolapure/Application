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

int SearchLastOcc(PNODE Head, int no)
{
    int iPos1 = -1;
    int iPos2 = 0;

    while(Head != NULL)
    {
        iPos2++;

        if(Head->Data == no)
        {
            iPos1 = iPos2;
        }

        Head = Head->Next;
    }   

    return iPos1;
}

void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");

    while(Head != NULL)
    {
        printf("| %d | -> " , Head->Data);
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

    printf("Enter the element to search : ");
    scanf("%d", &iRet);

    iPos = SearchLastOcc(First, iRet);

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