#include<stdio.h>

float IncomeTax(int iAmount)
{
    if(iAmount <= 500000)
    {
        printf("No income tax\n");
    }
    else if((iAmount >= 500000) && (iAmount <= 1000000))
    {
        printf("10%% income tax\n");
    }
    else if((iAmount >= 1000000) && (iAmount <= 2000000))
    {
        printf("20%% income tax\n");
    }
    else
    {
        printf("30%% income tax\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    IncomeTax(iValue);

    return 0;
}