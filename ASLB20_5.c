#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {
        case 'A':
            printf("Your exam at 7AM\n");
            break;
        case 'B':
            printf("Your exam at 8:30AM\n");
            break;
        case 'C':
            printf("Your exam at 9:20AM\n");
            break;
        case 'D':
            printf("Your exam at 10:30AM\n");
            break;
        default:
            printf("Invalid division\n");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}