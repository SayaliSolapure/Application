#include<stdio.h>

int Multiply(int iNo)
{
    int iDigit = 1;
    int iMult = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = Multiply(iValue);

    printf("Product of digits are : %d\n",iRet);

    return 0;
}