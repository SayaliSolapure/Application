#include<stdio.h>

int Frequency(char *str)
{
    int iCapCount = 0;
    int iSmallCount = 0;
    int iDiff = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapCount++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCount++;
        }
        str++;

        iDiff = iCapCount - iSmallCount;
    }

    return iDiff;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Frequency(Arr);

    printf("Difference is : %d\n",iRet);

    return 0;
}