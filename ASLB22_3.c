#include<stdio.h>

int Difference(char *str)
{
    int iSmallCnt = 0;
    int iCapCnt = 0;
    int iDiff = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapCnt++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCnt++;
        }
        str++;
    }

    iDiff = iCapCnt - iSmallCnt;

    return iDiff;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("Difference is : %d\n",iRet);

    return 0;
}