//// CODE: To make the entered character(Alphabet) lower or upper case using ctype functions.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char alphabet;
    printf("Enter the Alphabet\n");
    alphabet = getchar();

    if(islower(alphabet))
      putchar(toupper(alphabet));
    else
     putchar(tolower(alphabet));
}