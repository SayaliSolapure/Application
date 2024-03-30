#include<stdio.h>

int iFrequency(char *str)
{
    int iSmallCnt = 0;
    int iCapCnt = 0;
    int iDiff = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCnt++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapCnt++;
        }
        str++;

        iDiff = iSmallCnt - iCapCnt;
    }
    return iDiff;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    iRet = iFrequency(arr);

    printf("Frequency is : %d\n",iRet);

    return 0;
}