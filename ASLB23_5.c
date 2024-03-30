#include<stdio.h>

int CountWhite(char *str)
{
    int iSpaceCnt = 0;

    while(*str != '\0')
    {
        if((*str == ' '))
        {
            iSpaceCnt++;
        }
        str++;
    }

    return iSpaceCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);
    
    iRet = CountWhite(arr);

    printf("White spaces are : %d\n",iRet);

    return 0;
}