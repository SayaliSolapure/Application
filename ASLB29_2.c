#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iPos = 1;

    while(iNo1 != 0 || iNo2 != 0)
    {
        if((iNo1 & 1) && (iNo2 & 2))
        {
            printf("%d\n",iPos);
        }

        iNo1 >>= 1;
        iNo2 >>= 1;
        iPos++;
    }
}

int main()
{
    UINT iValue1 = 0, iValue2 = 0;

    printf("Enter two numbers : ");
    scanf("%d %d",&iValue1,&iValue2);

    CommonBits(iValue1,iValue2);

    return 0;
}