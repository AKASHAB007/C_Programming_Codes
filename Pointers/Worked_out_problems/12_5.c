//// CODE: P:396 > 12.5 - Program using pointers to determine the length of a character string.

#include <stdio.h>

int main()
{
    char *name;
        name = "DELHI";

    int length;
    char *cptr = name;

    printf("%s\n", name);

    while(*cptr != '\0')
    {
        printf("%c is stored at address %u\n", *cptr, cptr);
        cptr++;
    }
    length = cptr - name;
    printf("\nLength of the string = %d\n", length);

    return 0;
}

/* Sample TEST CASE OUTPUT: 

DELHI
D is stored at address 113676292
E is stored at address 113676293
L is stored at address 113676294
H is stored at address 113676295
I is stored at address 113676296

Length of the string = 5

*/


/* I faced an error while i was compiling this program that was the Segmentation fault ( core dumped ) error.
  Then i changed the location of name = "DELHI"; i.e I wrote it before assigning it to another pointer i.e to pointer cptr;
  Before as in textbook the name = "DELHI" was written after assigning the name value to pointer cptr.
*/