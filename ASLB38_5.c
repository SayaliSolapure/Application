#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNum = 1;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%d\t",iNum);
            iNum = iNum + 1;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows & columns are : \n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}