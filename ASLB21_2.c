#include<stdio.h>

void Display(char *ch)
{
    int Gap = 'a' - 'A';

    while(*ch != '\0')
    {
        if((*ch >= 'a') && (*ch <= 'z'))
        {
            *ch = *ch - Gap;
        }
        else if((*ch >= 'A') && (*ch <= 'Z'))
        {
            *ch = *ch + Gap;
        }
        ch++;
    }
}

int main()
{
    char cValue[20];

    printf("Enter the character : ");
    scanf("%[^'\n']s", &cValue);

    Display(cValue);

    printf("String after editing is : %s\n",cValue);
    
    return 0;
}