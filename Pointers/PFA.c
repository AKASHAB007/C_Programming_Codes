//// CODE: P:400 > PFA - Pointer as Function Argument example.

#include <stdio.h>
 
int change(int *); 

int main()
{
    int x;
    x = 20;

    change(&x);

    printf("\nThe value of x = %d\n\n", x);
  
    return 0;
}

int change (int *p)
{
    *p = *p +10;
}


/* TEST CASE OUTPUT:

The value of x = 30

*/