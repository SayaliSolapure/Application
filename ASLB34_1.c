#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    int iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }

    iDiff = iEvenSum - iOddSum;

    return iDiff;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = Addition(ptr, iSize);

    printf("Summation of elements are : %d\n",iRet);

    free(ptr);

    return 0;
}