#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
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