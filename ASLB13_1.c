#include<stdio.h>

float CalculateBill(int iAmount)
{
    if(iAmount <= 500)
    {
        printf("No discount\n");
    }
    else if((iAmount >= 500) && (iAmount <= 1500))
    {
        printf("10%% discount\n");
    }
    else
    {
        printf("15%% discount\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    CalculateBill(iValue);

    return 0;
}