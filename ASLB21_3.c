#include<stdio.h>

void Display(char *ch)
{
    char c = '\0';

    if((*ch >= 'A') && (*ch <= 'Z'))
    {
        for(c = *ch; c <= 'Z'; c++)
        {
            printf("%c\t",c);
        }
    }
    else if((*ch >= 'a') && (*ch <= 'z'))
    {
        for(c = *ch; c >= 'a'; c--)
        {
            printf("%c\t",c);
        }
    }
    printf("\n");
}

int main()
{
    char cValue[20];

    printf("Enter the character : ");
    scanf("%[^'\n']s",&cValue);

    Display(cValue);

    return 0;
}