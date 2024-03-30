#include<stdio.h>

int CountOdd(int iNo)
{
    int iCnt = 0;
    int iOdd = 0;

    while(iNo != 0)
    {
        iOdd = iNo % 10;
        if((iNo % 2) != 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("Odd numbers are : %d\n",iRet);

    return 0;
}