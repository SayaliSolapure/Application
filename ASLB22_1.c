#include<stdio.h>

int CountCapital(char *str)
{
    int iCapCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapCnt++;
        }
        str++;
    }

    return iCapCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("Capital case character count is : %d\n",iRet);

    return 0;
}