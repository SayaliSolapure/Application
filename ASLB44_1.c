#include<stdio.h>

void StrSmall(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    StrSmall(Arr);

    printf("String after editing is : %s\n",Arr);

    return 0;
}