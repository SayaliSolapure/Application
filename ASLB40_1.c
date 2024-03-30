#include<stdio.h>
#include<string.h>

void Pattern(char *str)
{
    int i = 0, j = 0, iLength;

    iLength = strlen(str);

    for(i = 0; i < iLength; i++)
    {
        for(j = 0; j < iLength; j++)
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