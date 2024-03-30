#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;

    UINT iMask = 0X000000000;

    UINT iResult = 0;

    if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
    {
        printf("Invalid position\n");
        return FALSE;
    }

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iMask = iMask1 | iMask2;

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0;
    UINT iBit1 = 0;
    UINT iBit2 = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    printf("Enter the first position : ");
    scanf("%d",&iBit1);

    printf("Enter the second position : ");
    scanf("%d",&iBit2);

    bRet = ChkBit(iValue, iBit1, iBit2);

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