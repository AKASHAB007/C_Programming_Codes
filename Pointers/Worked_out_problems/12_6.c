//// CODE:P:400-401 > 12.6 - Program to swap to numbers using pointers as function arguments. ( 12.7 is same as 12.6 )

#include <stdio.h>
 
void swap( int *, int *);

int main()
{
    int x, y;
    x = 100;
    y = 200;

    printf("\nThe values of x and y before swapping are: x = %d, y = %d\n", x, y);
 
    swap(&x, &y);

    printf("\nThe values of x and y after swapping are: x = %d, y = %d\n\n", x, y);
 
    return 0;
}

void swap( int *a, int *b)
{
    int t;

    t = *a; // Assigning the value at address 'a' to 't'.
    *a = *b; // Assigning the value at address 'b' to value of address at 'a'.
    *b = t; // Assigning the value of 't' to value at address 'b'.  
}


/* TEST CASE OUTPUT:

The values of x and y before swapping are: x = 100, y = 200

The values of x and y after swapping are: x = 200, y = 100

*/