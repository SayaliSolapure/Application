#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

#define BUFFERSIZE 1024

int CountChar(char FName[], char ch)
{
    int fd = 0;
    char Arr[BUFFERSIZE];
    int iRet = 0, iCnt = 0, iCount = 0;

    fd = open(FName, O_RDONLY);

    while(1)
    {
        iRet = read(fd,Arr,sizeof(Arr));
        if(iRet == 0)
        {
            break;
        }
        for(iCnt = 0; iCnt < iRet; iCnt++)
        {
            if(Arr[iCnt] == ch)
            {
                iCount++;
            }
        }
        return iCount;
    }
}

int main()
{
    char FileName[30];
    char cValue;
    int bRet = 0;

    printf("Enter the file name that you want to open\n");
    scanf("%s",FileName);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    bRet = CountChar(FileName, cValue);

    printf("Number of characters are : %d\n",bRet);

    return 0;
}