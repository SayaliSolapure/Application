#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, UINT iStart, UINT iEnd)
{
    UINT iMask = ((1 << (iEnd - iStart + 1)) - 1) << iStart;

    return iNo ^ iMask;
}

int main()
{
    UINT iValue = 0;
    UINT iFirst = 0;
    UINT iLast = 0;
    UINT iResult = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    printf("Enter the start position : ");
    scanf("%d",&iFirst);

    printf("Enter the end position : ");
    scanf("%d",&iLast);

    iResult = ToggleBitRange(iValue, iFirst, iLast);

    printf("Result is : %d\n",iResult);

    return 0;
}