#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 1;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n", iRet);

    return 0;
}