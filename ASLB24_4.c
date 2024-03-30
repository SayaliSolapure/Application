#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCnt = 1;
    int iPos = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
        }
        str++;
        iCnt++;
    }

    return iPos;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter character : ");
    scanf(" %c",&cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n",iRet);

    return 0;
}