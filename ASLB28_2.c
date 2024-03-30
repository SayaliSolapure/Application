#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    UINT iMask = 0X01;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return (iNo ^ iMask);
    }
    else
    {
        return iNo;
    }
}

int main()
{
    UINT iValue = 0;
    UINT iBit = 0;
    UINT iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter position : ");
    scanf("%d",&iBit);

    iRet = OffBit(iValue, iBit);

    printf("Result is : %d\n",iRet);

    return 0;
}