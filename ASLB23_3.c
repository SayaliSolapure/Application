#include<stdio.h>

void strtogglex(char *str)
{
    int Gap = 'a' - 'A';

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - Gap;
        }
        else
        {
            *str = *str + Gap;
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    strtogglex(arr);

    printf("Modified string is %s\n",arr);

    return 0;
}