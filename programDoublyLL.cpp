#include<iostream>
using namespace std;

typedef class node
{
    public:
        int data;
        node *next;
        node *prev;

        node()
        {
            data = 0;
            next = NULL;
            prev = NULL;
        }

        node(int Value)
        {
            data = Value;
            next = NULL;
            prev = NULL;
        }

}NODE, *PNODE;

class LinkedList
{
    public:
        PNODE First;
        PNODE Last;
        int iCount;

        LinkedList()
        {
            First = NULL;
            Last = NULL;
            iCount = 0;
        }

        virtual void InsertFirst(int no) = 0;
        virtual void InsertLast(int no) = 0;
        virtual void InsertAtPos(int no, int ipos) = 0;

        virtual void DeleteFirst() = 0;
        virtual void DeleteLast() = 0;
        virtual void DeleteAtPos(int ipos) = 0;

        void Display()
        {
            PNODE temp = First;

            cout<<"Elements of Linked list are : "<<"\n";

            for(int iCnt = 1; iCnt <= iCount; iCnt++)
            {
                cout<<" | "<<temp->data<<" |-> ";
                temp = temp->next;
            }
            cout<<"NULL \n";
        }

        int Count()
        {
            return iCount;
        }
};

class DoublyLL : public LinkedList
{
    public:
        DoublyLL();
        ~DoublyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);
};

DoublyLL:: DoublyLL()
{
    cout<<"Inside constructor\n";
}

DoublyLL:: ~DoublyLL()
{
    cout<<"Inside destructor\n";
}

void DoublyLL:: InsertFirst(int no)
{
    PNODE newn = NULL;

    newn = new NODE(no);

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        First->prev = newn;
        newn->next = First;
        First = newn;
    }

    Last->next = First;
    First->prev = Last;

    iCount++;
}

void DoublyLL:: InsertLast(int no)
{
    PNODE newn = NULL;

    newn = new NODE(no);

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        newn->prev = Last;
        Last = Last->next;
    }

    First->prev = Last;
    Last->next = First;

    iCount++;
}

void DoublyLL:: DeleteFirst()
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
        First = First->next;
        delete Last->next;

        First->prev = Last;
        Last->next = First;
    }

    iCount--;
}

void DoublyLL:: DeleteLast()
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
        Last = Last->prev;
        delete Last->next;

        First->prev = Last;
        Last->next = First;
    }

    iCount--;
}

void DoublyLL:: InsertAtPos(int no,int ipos)
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

        PNODE newn = new NODE(no);

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

void DoublyLL:: DeleteAtPos(int ipos)
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

        for(int iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        iCount--;
    }
}

int main()
{
    DoublyLL obj;
    int iChoice = 0;
    int iValue = 0;
    int iPosition = 0;

    cout<<"Marvellous Linked List Application\n";

    while(1)
    {
        cout<<"______________________________________________\n";
        cout<<"Please enter your choice : \n";

        cout<<"1 : Insert node at first position\n";
        cout<<"2 : Insert node at last position\n";
        cout<<"3 : Insert node at the given position\n";
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