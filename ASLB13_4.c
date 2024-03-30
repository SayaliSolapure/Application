#include<stdio.h>

float TouristBill(int iKilometer)
{
    if(iKilometer <= 100)
    {
        printf("They charge 25 rupees per kilometer\n");
    }
    else
    {
        printf("They charge 15 rupees per kilometer\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    TouristBill(iValue);

    return 0;
}