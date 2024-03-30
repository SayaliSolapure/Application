#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int iSize = 0;
    int iValue = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(sizeof(int));

    printf("Enter %d elements : \n",iSize);

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = FirstOcc(ptr,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurance of number is : %d",iRet);
    }

    free(ptr);

    return 0;
}