#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask9 = 1<<8;
    UINT iMask12 = 1<<11;
    UINT iResult = 0;

    iResult = ((iNo & iMask9) && (iNo & iMask12)) != 0;

    if(iMask9 || iMask12)
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

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("9th or 12th bit is ON\n");
    }
    else
    {
        printf("9th or 12th bit is OFF\n");
    }

    return 0;
}