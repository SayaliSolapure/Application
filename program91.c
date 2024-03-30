#include<stdio.h>
#include<stdlib.h>

#define ERR_NOTFOUND -1

int SearchFirstOccurance(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(Arr[iCnt] == iLength)
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number of element : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the number that you want to search : \n");
    scanf("%d",&iValue);

    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = SearchFirstOccurance(ptr, iSize, iValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such element\n");
    }
    else
    {
        printf("%d is occured at index %d\n",iValue,iRet);
    }

    free(ptr);

    return 0;
}