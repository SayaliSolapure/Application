#include<stdio.h>

void strRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    strRevX(arr);

    printf("Reverse string is : %s\n",arr);

    return 0;
}