#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char FileName[50];
    char Arr[10];
    int iRet = 0;

    printf("Enter the file name that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDONLY);

    iRet = read(fd,Arr,10);
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);
    write(1,Arr,iRet);

    iRet = read(fd,Arr,5);
    write(1,Arr,iRet);

    iRet = read(fd,Arr,5);

    close(fd);

    return 0;
}