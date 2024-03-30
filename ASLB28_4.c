#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, int iPos)
{
    UINT iMask = 0X001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iBit = 0;
    UINT iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    printf("Enter the position : ");
    scanf("%d",&iBit);

    iRet = ToggleBit(iValue, iBit);

    printf("Result is : %d\n",iRet);

    return 0;
}