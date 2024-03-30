#include<stdio.h>
#include<string.h>

int CountWhiteSpace(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhiteSpace(Arr);

    printf("White spaces are : %d\n",iRet);

    return 0;
}