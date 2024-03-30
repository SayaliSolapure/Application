#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE;

class SinglyCL
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:
        SinglyCL();
        ~SinglyCL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
};

void SinglyCL:: InsertFirst(int no)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    Last->next = First;

    iCount++;
}

void SinglyCL:: InsertLast(int no)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        Last = Last->next;
    }
    Last->next = First;

    iCount++;
}

void SinglyCL:: InsertAtPos(int no,int ipos)
{
    if((ipos < 1) || (ipos > iCount+1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE temp = First;

        for(int iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }

        PNODE newn = new NODE;

        newn->data = no;
        newn->next = NULL;

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

void SinglyCL:: DeleteFirst()
{
    if(iCount == 0)
    {
        return;
    }
    else if(iCount == 1)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        PNODE temp = First;

        First = First->next;
        delete (Last->next);
        Last->next = First;
    }
    iCount--;
}

void SinglyCL:: DeleteLast()
{
    if(iCount == 0)
    {
        return;
    }
    else if(iCount == 1)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        PNODE temp = First;

        while(temp->next != Last)
        {
            temp = temp->next;
        }

        delete Last;
        Last = temp;
        Last->next = First;
    }
    iCount--;
}

void SinglyCL:: DeleteAtPos(int ipos)
{
    if((ipos < 1) || (ipos > iCount))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = First;
        PNODE tempX = NULL;

        for(int iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }

        tempX = temp->next;
        temp->next = temp->next->next;

        delete tempX;

        iCount--;
    }
}

SinglyCL:: SinglyCL()
{
    cout<<"Inside constructor\n";

    First = NULL;
    Last = NULL;
    iCount = 0;
}

SinglyCL:: ~SinglyCL()
{
    cout<<"Inside destructor\n";

    PNODE temp = First;

    for(int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        temp = First;
        First = First->next;
        delete temp;
    }
}

void SinglyCL:: Display()
{
    PNODE temp = First;
    PNODE tempX = Last;

    if(temp != NULL && tempX != NULL)
    {
        do
        {
            cout<<" | "<<temp->data<<" |-> ";
            temp = temp->next;
        }while(temp != tempX->next);

        cout<<"NULL \n";
    }
    else
    {
        cout<<"Linked list is empty\n";
    }
}

int SinglyCL:: Count()
{
    return iCount;
}

int main()
{
    SinglyCL obj;
    int iChoice = 0;
    int iValue = 0;
    int iPosition = 0;

    cout<<"Marvellous LinkedList Application\n";

    while(1)
    {
        cout<<"______________________________________________\n";
        cout<<"Please enter your choice : \n";

        cout<<"1 : Insert node at first position\n";
        cout<<"2 : Insert node at last position\n";
        cout<<"3 : Insert node at given position\n";
        cout<<"4 : Delete node from first position\n";
        cout<<"5 : Delete node from last position\n";
        cout<<"6 : Delete node from the given position\n";
        cout<<"7 : Display the elements of linked list\n";
        cout<<"8 : Count number of nodes from linked list\n";
        cout<<"9 : Terminate the application\n";
        cout<<"______________________________________________\n";

        cin>>iChoice;

        cout<<"______________________________________________\n";

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the value that you want to store : \n";
                cin>>iValue;
                obj.InsertFirst(iValue);
                break;

            case 2:
                cout<<"Enter the value that you want to store : \n";
                cin>>iValue;
                obj.InsertLast(iValue);
                break;

            case 3:
                cout<<"Enter the value that you want to store : \n";
                cin>>iValue;

                cout<<"Enter the position : \n";
                cin>>iPosition;
                obj.InsertAtPos(iValue,iPosition);
                break;

            case 4:
                obj.DeleteFirst();
                break;

            case 5:
                obj.DeleteLast();
                break;

            case 6:
                cout<<"Enter the position : \n";
                cin>>iPosition;

                obj.DeleteAtPos(iPosition);
                break;

            case 7:
                obj.Display();
                break;

            case 8:
                cout<<"Number of elements are : "<<obj.Count()<<"\n";
                break;

            case 9:
                cout<<"Thank you for using the application\n";
                return 0;

            default:
                cout<<"Invalid choice\n";
                break;
        }
    }

    return 0;
}