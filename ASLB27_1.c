#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0X40;

    return (iNo ^ iMask);
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);
    
    printf("Result is : %d\n",iRet);

    return 0;
}