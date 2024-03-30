#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0X20010;
    UINT iResult = 0;

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("5th & 18th bit is ON\n");
    }
    else
    {
        printf("5th & 18th bit is OFF\n");
    }

    return 0;
}