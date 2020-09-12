#include <stdio.h>
#include <string.h>

int main()
{
    int num;

    printf("Enter the Month's number: ");
    scanf("%d",&num);

    switch(num)
    {
        case 1: 
            printf("\nJanuary has 31 Days\n");
            break;

        case 2:
            printf("\nFebraury has 29 days but on leap year it's 28 days\n");
            break;

        case 3: 
            printf("\nMarch has 31 days\n");
            break;

        case 4:
            printf("\nApril has 30 days\n");
            break;

        case 5:
            printf("\nMay has 31 days\n");
            break;

        case 6:
            printf("\nJune has 30 days\n");
            break;

        case 7:
            printf("\nJuly has 31 days\n");
            break;

        case 8:
            printf("\nAugust has 31 days\n");
            break;

        case 9:
            printf("\nSeptember has 30 days\n");
            break;

        case 10:
            printf("\nOctober has 31 days\n");
            break;

        case 11:
            printf("\nNovember has 30 days\n");
            break;

        case 12:
            printf("\nDecember has 31 days\n");
            break;

    }
     return 0;
}