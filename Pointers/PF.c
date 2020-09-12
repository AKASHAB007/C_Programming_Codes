//// CODE: P:404-05 > PF - Pointers as functions example.

#include <stdio.h>

double mul(int *, int *); 

int main()
{
    double (*p1)();
    int  x = 10, y = 20;

    p1 = mul;

    printf("\nMultiplication = %.2f\n\n",((*p1)(&x,&y)));
 
    return 0;
}

double mul(int *a, int *b)
{
    return(*a * *b);
}

/* TEST CASE OUTPUT:

Multiplication = 200.00

*/