#include<stdio.h>

int CountRange(int iNo)
{
    int iCount = 0;
    int iRange = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iRange = iNo % 10;

        if((iRange > 3) && (iRange < 7))
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

    iRet = CountRange(iValue);

    printf("%d\n",iRet);

    return 0;
}