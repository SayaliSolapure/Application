#include<stdio.h>

void strrevX(char *str)
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
    char arr1[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",arr1);

    strrevX(arr1);

    printf("Reverse string is : %s\n", arr1);

    return 0;
}