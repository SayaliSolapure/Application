#include<stdio.h>

int CountFour(int iNo)
{
    int iCount = 0;
    int iFour = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iFour = iNo % 10;

        if(iFour == 4)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d\n", iRet);

    return 0;
}