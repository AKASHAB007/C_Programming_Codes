//// CODE : P:129 > 5.9 - To read a name > ANIL KUMAR GUPTA < using three scanfs and then printing as follows: 
/*                     (a) ANIL K. GUPTA
                       (b) A.K. GUPTA
                       (c) GUPTA A.K 
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char first[30], middle[30], last[30];

    printf("Enter the first name: ");
    scanf("%s",&first);

    printf("Enter the middle name: ");
    scanf("%s",&middle);

    printf("Enter the last name: ");
    scanf("%s",&last);

    printf("(a) %s %c. %s\n",first, middle[0], last);

    printf("(b) %c.%c %s\n",first[0], middle[0], last);

    printf("(a) %s %c.%c\n",last, first[0], middle[0]);

    return 0;
    
}







