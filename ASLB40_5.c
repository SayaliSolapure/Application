#include<stdio.h>
#include<string.h>

void Pattern(char *str)
{
    int i = 0, j = 0, iLength = 0;

    iLength = strlen(str);

    for(i = 0; i < iLength; i++)
    {
        for(j = 0; j < i+1; j++)
        {
            printf("%c\t",str[j]);
        }
        printf("\n");
    }
    for(i = iLength-1; i > 1; i--)
    {
        for(j = 0; j < i; j++)
        {
            printf("%c\t",str[j]);
        }
        printf("\n");
    }
}

int main()
{
    char arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",arr);

    Pattern(arr);

    return 0;
}