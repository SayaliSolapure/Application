#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char FileName[50];
    char *Arr = NULL;
    int iRet = 0, iSize = 0;

    printf("Enter the file name that you want to open\n");
    scanf("%s",FileName);

    printf("Enter the number of bytes that you want to read : \n");
    scanf("%d",&iSize);

    Arr = (char *)malloc(iSize);

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    iRet = read(fd,Arr,iSize);

    printf("%d bytes gets successfully fetched from the file \n",iRet);

    printf("Data from file is : \n");
    write(1,Arr,iRet);

    close(fd);
    free(Arr);

    return 0;
}