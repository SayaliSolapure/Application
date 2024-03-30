#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int Display(char FName[], int iSize)
{
    int fd = 0;
    char Arr[50];
    int bRet = 0;

    fd = open(FName, O_RDWR);

    bRet = read(fd,Arr,iSize);
}

int main()
{
    char FileName[30];
    int iValue = 0;
    int iRet = 0;

    printf("Enter the file name that you want to open\n");
    scanf("%s",FileName);

    printf("Enter the value of characters : \n");
    scanf("%d",&iValue);

    iRet = Display(FileName, iValue);

    printf("%d bytes gets successfully fetched from the file \n", iRet);

    return 0;
}