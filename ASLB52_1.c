#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    int iFreq = 0;

    printf("Enter the number : \n");
    scanf("%d",&iFreq);

    Display(iFreq);

    return 0;
}