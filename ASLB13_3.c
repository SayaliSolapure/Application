#include<stdio.h>

float SchoolFees(int iFees)
{
    if((iFees <= 10000))
    {
        printf("1st standard\n");
    }
    else if((iFees >= 10000) && (iFees <= 15000))
    {
        printf("2nd standard\n");
    }
    else if((iFees >= 15000) && (iFees <= 21000))
    {
        printf("3rd standard\n");
    }
    else
    {
        printf("4th standard\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    SchoolFees(iValue);

    return 0;
}