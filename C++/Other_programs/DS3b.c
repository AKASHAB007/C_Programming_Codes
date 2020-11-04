//// CODE: DATA STRUCTURES > Problem-3
/*      Implement and Demonstrate the following C functions using pass-by-reference method:
            (a) strcpy()
            (b) strcat()
            (c) strcmp()
            (d) strrev()
*/

//// Program-3 > (b) strcat()

#include <stdio.h>
#include <string.h>
 
char function(char *p, char *q)
{
    strcat(p, q);
}

int main()
{
    char string1[5] = "RCB_";
    char string2[8] = "FOREVER";
    char string3[20] = "EESALA CUP NAMDE";

    function(string1, string2);     // string2's "FOREVER" gets Concatenated with string1's "RCB_"

    printf("\033[1;33m");
    printf("\n%s  >>>>>>>>>\n", string1);
    printf("\033[0m");

    printf("\033[1;31m");
    printf("%s  >>>>>>>>>\n\n", string3);
    printf("\033[0m");
  
    return 0;
} 

/* Test Case Output:

RCB_FOREVER  >>>>>>>>>
EESALA CUP NAMDE  >>>>>>>>>

*/