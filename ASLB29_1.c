#include<stdio.h>

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        if(iNo & 1)
        {
            iCount++;
        }
        iNo = iNo >> 1;
    }

    return iCount;
}

int main()
{
    UINT iValue = 0;
    UINT iResult = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iResult = CountOne(iValue);

    printf("Number of ON (1) bits : %d\n",iResult);

    return 0;
}