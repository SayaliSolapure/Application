#include<stdio.h>

void strupx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    strupx(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}