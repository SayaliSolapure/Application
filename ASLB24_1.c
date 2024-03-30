#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        str++;
    }
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}