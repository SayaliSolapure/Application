#include<stdio.h>

float DisplayMarks(int iNo)
{
    if(iNo <= 35)
    {
        printf("Fail\n");
    }
    else if(iNo <= 50)
    {
        printf("Pass class\n");
    }
    else if(iNo <= 60)
    {
        printf("Second class\n");
    }
    else if(iNo <= 70)
    {
        printf("First class\n");
    }
    else if(iNo >= 70)
    {
        printf("First class with distinction\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter value : \n");
    scanf("%d",&iValue);

    DisplayMarks(iValue);

    return 0;
}