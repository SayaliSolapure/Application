#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE, *PNODE, **PPNODE;

void Display(PNODE Head, PNODE Tail)
{
    if(Head != NULL && Tail != NULL)
    {
        printf("<=> ");
        do
        {
            printf("|%d| <=> ",Head->data);
            Head = Head->next;
        }while(Head != Tail->next);

        printf("\n");
    }
    else
    {
        printf("Linked list is empty\n");
    }
}

int Count(PNODE Head,PNODE Tail)
{
    int iCount = 0;

    if(Head != NULL && Tail != NULL)
    {
        do
        {
            iCount++;
            Head = Head->next;
        }while(Head != Tail->next);
        return iCount;
    }
    else
    {
        return 0;
    }
}

void InsertFirst(PPNODE Head,PPNODE Tail,int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(*Head == NULL && *Tail == NULL)
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;

        *Head = newn;
    }
    (*Tail)->next = *Head;
    (*Head)->next = *Tail;
}

void InsertLast(PPNODE Head,PPNODE Tail,int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(*Head == NULL && *Tail == NULL)
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        (*Tail)->next = newn;
        newn->prev = *Tail;

        *Tail = newn;
    }
    (*Tail)->next = *Head;
    (*Head)->next = *Tail;
}

void InsertAtPos(PPNODE Head,PPNODE Tail,int No,int iPos)
{}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{}

void DeleteLast(PPNODE Head,PPNODE Tail)
{}

void DeleteAtPos(PPNODE Head,PPNODE Tail)
{}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    int iRet = 0;

    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);

    InsertFirst(&First,&Last,101);
    InsertFirst(&First,&Last,111);
    InsertFirst(&First,&Last,121);

    Display(First,Last);

    iRet = Count(First,Last);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}