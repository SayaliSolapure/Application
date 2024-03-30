#include<stdio.h>

int CountSmall(char *str)
{
    int iSmallCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCnt++;
        }
        str++;
    }

    return iSmallCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("Small case character count is : %d\n",iRet);

    return 0;
}