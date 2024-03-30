#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char *ch)
{
    while(*ch != '\0')
    {
        if((*ch >= '!' && *ch <= '/') || (*ch >= ':' && *ch <= '@') || (*ch >= '[' && *ch <= '`') || (*ch >= '{' && *ch <= '~'))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        ch++;
    }
}

int main()
{
    char cValue[20];
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%[^'\n']s",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special character\n");
    }
    else
    {
        printf("It is not a special character\n");
    }

    return 0;
}