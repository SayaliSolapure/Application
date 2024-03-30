#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0XF;

    return iNo | iMask;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OnBit(iValue);

    printf("Result is : %d\n",iRet);

    return 0;
}