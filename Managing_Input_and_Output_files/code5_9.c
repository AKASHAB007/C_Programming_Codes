//// CODE : P:129 > 5.9 - To read a name > ANIL KUMAR GUPTA < using three scanfs and then printing as follows: 
/*                     (a) ANIL K. GUPTA
                       (b) A.K. GUPTA
                       (c) GUPTA A.K 
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char name1[30], name2[30], name3[30];

    printf("Enter the first name: ");
    scanf("%s",&name1);

    printf("Enter the middle name: ");
    scanf("%s",&name2);

    printf("Enter the last name: ");
    scanf("%s",&name3);

    printf("(a) %s %c. %s\n",name1, name2[0], name3);

    printf("(b) %c.%c %s\n",name1[0], name2[0], name3);

    printf("(a) %s %c.%c\n",name3, name1[0], name2[0]);

    return 0;
    
}







