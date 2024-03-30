#include<stdio.h>

int strcatX(char *src,char *dest,int iLength)
{
    while(*dest != '\0')
    {
        dest++;
    }

    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;

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
    char Arr[20];
    char Brr[20] = "Demo";
    int iNo = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the number of letters that you want to concate\n");
    scanf("%d",&iNo);

    strcatX(Arr,Brr,iNo);

    printf("String after concate is : %s\n",Brr);

    return 0;
}