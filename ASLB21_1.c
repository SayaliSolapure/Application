#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("ASCII Table\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t%d\t%x\t%o\t",iCnt,iCnt,iCnt,iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}