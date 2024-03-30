#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int bool;

bool Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(Arr[iCnt] == iNo)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iSize = 0;
    int iValue = 0;
    int iCnt = 0;
    int *ptr = NULL;
    bool bRet = false;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter %d numbers : \n", iSize);

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Check(ptr,iSize,iValue);

    if(bRet == true)
    {
        printf("No is present in the array\n");
    }
    else
    {
        printf("No is not present in the array\n");
    }

    return 0;
}