#include<stdio.h>

#define true 1
#define false 0

typedef int bool;

bool CheckVowels(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') || (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    bRet = CheckVowels(arr);

    if(bRet == true)
    {
        printf("It contains vowels\n");
    }
    else
    {
        printf("It not contains vowels\n");
    }

    return 0;
}