#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMaskFirst = (iNo & 0XF0000000) >> 28;
    UINT iMaskLast = iNo & 0XF0000000F;

    UINT toggledNo = (iNo & 0XFFFFFFF0) | iMaskLast;
    toggledNo = (toggledNo & 0X0FFFFFFF) | (iMaskFirst << 28);

    return toggledNo;
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