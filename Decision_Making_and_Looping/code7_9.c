//// CODE: P:208 > 7.9 - To print the Gigantic letter 'S' using 15 rows and 18 columns.

#include <stdio.h>
 
int main()
{
    int i;

    printf("\n");

    for(i = 1; i <= 15; i++)
    {
        if(i == 1)
        printf("  * * * * * * * * * * * * * * * * *\n");

        if(i == 2)
        printf("* * * * * * - - - - - - - - - * * *\n");

        if(i == 3)
        printf("* * * * * - - - - - - - - - - - * *\n");

        if(i == 4)
        printf("* * * *                           *\n");

        if(i == 5)
        printf("* * * *\n");

        if(i == 6)
        printf("* * * *\n");

        if(i == 7)
        printf("* * * * * * * * * * * * * * * * *  \n");

        if(i == 8)
        printf("* * * * * * * * * * * * * * * * * *\n");

        if(i == 9)
        printf("  * * * * * * * * * * * * * * * * *\n");

        if( i == 10 || i == 11)
        printf("                            * * * *\n");

        if( i == 12)
        printf("*                           * * * *\n");

        if(i == 13)
        printf("* * - - - - - - - - - - - * * * * *\n");

        if(i == 14)
        printf("* * * - - - - - - - - - * * * * * *\n");

        if(i == 15)
        printf("* * * * * * * * * * * * * * * * *  \n");

    }
    printf("\n\n");
 
   return 0;
}