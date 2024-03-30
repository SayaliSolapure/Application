#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char FName[30];
    char Arr[] = "Hello World";

    printf("Enter the filename that you want to open\n");
    scanf("%s",FName);

    fd = open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    read(fd,Arr,10);

    close(fd);

    return 0;
}