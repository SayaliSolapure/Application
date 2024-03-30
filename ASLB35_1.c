#include<stdio.h>

int CountEven(int iNo)
{
    int iCnt = 0;
    int iEven = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iEven = iNo % 10;

        if((iNo % 2) == 0)
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

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("Even digits are : %d\n",iRet);

    return 0;
}