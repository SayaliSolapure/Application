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
        struct NodeS<T> *first;
        int iCount;
};

template <class T>
class SinglyCL
{
    public:
        struct NodeS<T> *first;
        struct NodeS<T> *last;
        int iCount;
};

template <class T>
class DoublyLL
{
    public:
        struct NodeD<T> *first;
        int iCount;
};

template <class T>
class DoublyCL
{
    public:
        struct NodeD<T> *first;
        struct NodeD<T> *last;
        int iCount;
};

int main()
{

    return 0;
}