#include<stdio.h>

int Mult(int iNo)
{
    int iDigit = 0, iProduct = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iProduct = iProduct * iDigit;

        iNo = iNo / 10;
    }
    return iProduct;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("Product of digits is : %d\n",iRet);

    return 0;
}