//// CODE: DATA STRUCTURES > Problem-3
/*      Implement and Demonstrate the following C functions using pass-by-reference method:
            (a) strcpy()
            (b) strcat()
            (c) strcmp()
            (d) strrev()
*/

//// Program-3 > (c) strcmp()

#include <stdio.h>
#include <string.h>

int function(char *p, char *q)
{
    return strcmp(p, q);
}
 
int main()
{
    char string1[15] = "Bangalore";
    char string2[15] = "Bengaluru";

    int x = function(string1, string2);     // Here x = -4 .
 
    if(x < 0)
    {
        printf("\nLetter 'e' has larger ASCII value than Letter 'a'\n");
    }
    else
    {
        printf("\nString Comparision Failed\n");
    }
    
    return 0;
}

/* Test Case Output:

Letter 'e' has larger ASCII value than Letter 'a'

*/