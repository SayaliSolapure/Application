#include<stdio.h>

int strlenX(char str[])
{

}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("Length of string is : %d\n",iRet);

    return 0;
}