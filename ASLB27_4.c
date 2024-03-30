#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X240;

    return (iNo ^ iMask);
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Result is : %d\n",iRet);

    return 0;
}