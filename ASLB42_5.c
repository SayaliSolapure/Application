#include<stdio.h>
#include<stdlib.h>

int DisplaySum(int Arr[], int Brr[], int iLength1, int iLength2)
{
    int iCnt = 0;
    int iSum1 = Arr[0];
    int iSum2 = Brr[0];

    for(iCnt = 0; iCnt < iLength1; iCnt++)
    {
        iSum1 = iSum1 + Arr[iCnt];
        printf("%d\t",iSum1);
    }

    for(iCnt = 0; iCnt < iLength2; iCnt++)
    {
        iSum2 = iSum2 + Brr[iCnt];
        printf("%d\t",iSum2);
    }
}

int main()
{
    int iSize1 = 0, iSize2 = 0;
    int *ptr1 = NULL; int *ptr2 = NULL;
    int iCnt = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize1);

    ptr1 = (int *)malloc(iSize1 * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize1; iCnt++)
    {
        scanf("%d",&ptr1[iCnt]);
    }

    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize1; iCnt++)
    {
        printf("%d\n",ptr1[iCnt]);
    }

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize2);

    ptr2 = (int *)malloc(iSize2 * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize2; iCnt++)
    {
        scanf("%d",&ptr2[iCnt]);
    }

    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize2; iCnt++)
    {
        printf("%d\n",ptr2[iCnt]);
    }

    DisplaySum(ptr1, ptr2, iSize1, iSize2);

    return 0;
}