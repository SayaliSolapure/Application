#include<stdio.h>

void Concate(char *str, char *dest, int iLength)
{
    while(*dest != '\0')
    {
        dest++;
    }

    while(*str != '\0')
    {
        *dest = *str;
        dest++;
        str++;

        iLength--;
        if(iLength == 0)
        {
            break;
        }
    }

    *dest = '\0';
}

int main()
{
    char arr1[20];
    char arr2[20] = "Logic";
    int iNo = 0;

    printf("Enter first string : \n");
    scanf("%[^'\n']s",arr1);

    printf("Enter the number of letters that you want to concate : \n");
    scanf("%d",&iNo);

    Concate(arr1, arr2, iNo);

    printf("String after concatenation is : %s\n",arr2);

    return 0;
}