#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{
    UINT iMask = 0X01;
    UINT iResult = 0;

    if((iPos < 1) || (iPos > 32))
    {
        printf("Invalid position\n");
        return FALSE;
    }

    iMask = iMask << (iPos - 1);

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
    UINT iBit = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter position : ");
    scanf("%d",&iBit);

    bRet = ChkBit(iValue, iBit);

    if(bRet == TRUE)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }

    return 0;
}