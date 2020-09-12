//// CODE: P:129 > 5.9 - To read a name > ANIL KUMAR GUPTA < using three scanf statements and printing out:
/*                  (a) ANIL K. GUPTA
                    (b) A. K. GUPTA
                    (c) GUPTA A.K 
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char first, middle, last;

    printf("Enter the first name: ");
    scanf("%s",&first);
   // printf("\n");

    printf("Enter the middle name: ");
    scanf("%s",&middle);
    printf("\n");

    printf("Enter the last name: ");
    scanf("%s",&last);
    printf("\n");

    printf("(a) %s %c %s\n", first, middle, last);

    printf("(b) %c.%c. %s\n", first, middle, last);

    printf("(c) %s %c.%c\n", first, middle, last);

    return 0;
}