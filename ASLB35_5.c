#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    int iDiff = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iNo % 2) == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }

        iNo = iNo / 10;
    }

    iDiff = iEvenSum - iOddSum;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Difference is : %d\n",iRet);

    return 0;
}