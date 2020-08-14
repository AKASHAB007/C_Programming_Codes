//// CODE: P:169 > 6.16 - To input the Numeric week day value (starting from Monday as 1) and display the corresponding name of the week day.

#include <stdio.h>
#include <string.h>

int main()
{
    int n,start;

    start:

    printf("Enter the Numeric value of any particular week day: ");
    scanf("%d",&n);
    
    printf("\n");

    switch(n)
    {
        case 1:
            printf("MONDAY\n");
            break;
        
        case 2:
            printf("TUESDAY\n");
            break;

        case 3: 
            printf("WEDNESDAY\n");
            break;

        case 4:
            printf("THURSDAY\n");
            break;

        case 5:
            printf("FRIDAY\n");
            break;
        
        case 6:
            printf("SATURDAY\n");
            break;

        case 7:
            printf("SUNDAY\n");
            break;

        default :
            printf("Enter a Valid Numeric value\n");
            goto start;
    }
    return 0;
}