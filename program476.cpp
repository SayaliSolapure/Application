#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int);
        ~ArrayX();
        void Accept();
        void Display();
};

ArrayX::ArrayX(int iNo)
{
    cout<<"Inside constructor to allocate memory\n";
    this->iSize = iNo;
    this->Arr = new int[iSize];
}

ArrayX::~ArrayX()
{
    cout<<"Inside destructor to allocate memory\n";
    delete []Arr;
}

void ArrayX:: Accept()
{
    cout<<"Inside accept method\n";

    cout<<"Enter the element : \n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void ArrayX:: Display()
{
    cout<<"Inside display method\n";

    cout<<"Elements of the array are : \n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
    cout<<"\n";
}

int main()
{
    int iValue = 0;

    cout<<"Inside main\n";

    cout<<"Enter the size of array : \n";
    cin>>iValue;

    ArrayX *obj = new ArrayX(iValue);

    obj->Accept();
    obj->Display();

    delete obj;

    cout<<"End of main\n";
    return 0;
}