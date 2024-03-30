#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(char *str1, char *str2)
{
    while((*str1 == '\0') && (*str2 == '\0'))
    {
        if(*str1 != *str2)
        {
            break;
        }
        str1++;
        str2++;
    }

    if((*str1 == '\0') && (*str2 == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char arr1[20];
    char arr2[20];
    bool bRet = false;

    printf("Enter first string : \n");
    scanf("%[^'\n']s",arr1);

    printf("Enter second string : \n");
    scanf(" %[^'\n']s",arr2);

    bRet = ChkEqual(arr1, arr2);

    if(bRet == true)
    {
        printf("Strings are equal.\n");
    }
    else
    {
        printf("Strings are not equal.\n");
    }

    return 0;
}