#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

#define BUFFERSIZE 1024

int CountSmall(char FName[])
{
    int fd = 0;
    char Arr[BUFFERSIZE];
    int bRet = 0, iCnt = 0, iCount = 0;

    fd = open(FName, O_RDONLY);

    while(1)
    {
        bRet = read(fd,Arr,sizeof(Arr));
        if(bRet == 0)
        {
            break;
        }
        for(iCnt = 0; iCnt < bRet; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
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
    int iRet = 0;

    printf("Enter the filename that you want to open\n");
    scanf("%s",FileName);

    iRet = CountSmall(FileName);

    printf("Number of small case letters are : %d\n",iRet);

    return 0;
}