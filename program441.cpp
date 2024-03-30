#include<iostream>
using namespace std;

template <class T>
struct NodeS
{
    T data;
    struct NodeS *next;
};

template <class T>
struct NodeD
{
    T data;
    struct NodeD *next;
    struct NodeD *prev;
};

template <class T>
class SinglyLL
{
    public:
        struct NodeS<T> * first;
        int iCount;

    SinglyLL();

    void Display();
    int Count();

    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T,int);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

template <class T>
SinglyLL<T>:: SinglyLL()
{}

template <class T>
void SinglyLL<T>:: Display()
{}

template <class T>
int SinglyLL<T>:: Count()
{
    return iCount;
}

template <class T>
void SinglyLL<T>:: InsertFirst(T no)
{}

template <class T>
void SinglyLL<T>:: InsertLast(T no)
{}

template <class T>
void SinglyLL<T>:: InsertAtPos(T no, int ipos)
{}

template <class T>
void SinglyLL<T>:: DeleteFirst()
{}

template <class T>
void SinglyLL<T>:: DeleteLast()
{}

template <class T>
void SinglyLL<T>:: DeleteAtPos(int ipos)
{}

template <class T>
class SinglyCL
{
    public:
        struct NodeS<T> * first;
        struct NodeS<T> * last;
        int iCount;

    SinglyCL();

    void Display();
    int Count();

    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

template <class T>
SinglyCL<T>:: SinglyCL()
{}

template <class T>
void SinglyCL<T>:: Display()
{}

template <class T>
int SinglyCL<T>:: Count()
{
    return iCount;
}

template <class T>
void SinglyCL<T>:: InsertFirst(T no)
{}

template <class T>
void SinglyCL<T>:: InsertLast(T no)
{}

template <class T>
void SinglyCL<T>:: InsertAtPos(T no, int ipos)
{}

template <class T>
void SinglyCL<T>:: DeleteFirst()
{}

template <class T>
void SinglyCL<T>:: DeleteLast()
{}

template <class T>
void SinglyCL<T>:: DeleteAtPos(int ipos)
{}

template <class T>
class DoublyLL
{
    public:
        struct NodeS<T> * first;
        struct NodeS<T> * last;
        int iCount;

    DoublyLL();

    void Display();
    int Count();

    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

template <class T>
DoublyLL<T>:: DoublyLL()
{}

template <class T>
void DoublyLL<T>:: Display()
{}

template <class T>
int DoublyLL<T>:: Count()
{
    return iCount;
}

template <class T>
void DoublyLL<T>:: InsertFirst(T no)
{}

template <class T>
void DoublyLL<T>:: InsertLast(T no)
{}

template <class T>
void DoublyLL<T>:: InsertAtPos(T no, int ipos)
{}

template <class T>
void DoublyLL<T>:: DeleteFirst()
{}

template <class T>
void DoublyLL<T>:: DeleteLast()
{}

template <class T>
void DoublyLL<T>:: DeleteAtPos(int ipos)
{}

template <class T>
class DoublyCL
{
    public:
        struct NodeS<T> * first;
        struct NodeS<T> * last;
        int iCount;

    DoublyCL();

    void Display();
    int Count();

    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

template <class T>
DoublyCL<T>:: DoublyCL()
{}

template <class T>
void DoublyCL<T>:: Display()
{}

template <class T>
int DoublyCL<T>:: Count()
{
    return iCount;
}

template <class T>
void DoublyCL<T>:: InsertFirst(T no)
{}

template <class T>
void DoublyCL<T>:: InsertLast(T no)
{}

template <class T>
void DoublyCL<T>:: InsertAtPos(T no, int ipos)
{}

template <class T>
void DoublyCL<T>:: DeleteFirst()
{}

template <class T>
void DoublyCL<T>:: DeleteLast()
{}

template <class T>
void DoublyCL<T>:: DeleteAtPos(int ipos)
{}

int main()
{
    SinglyLL <int>obj1;
    SinglyCL <int>obj2;
    DoublyLL <int>obj3;
    DoublyCL <int>obj4;

    return 0;
}