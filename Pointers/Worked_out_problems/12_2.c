//// CODE: P:387 > 12.2 - Program to illustrate the use of indirection operator '*' to access the value pointed to by a pointer.

#include <stdio.h>
 
int main()
{
    int x, y;
    int *p;

    x = 10;
    p = &x;
    y = *p;

    printf("\nValue of x is %d\n\n", x);

    printf("%d is stored at address %u\n", x, &x);

    printf("%d is stored at address %u\n", *&x, &x);

    printf("%d is stored at address %u\n", *p, p);

    printf("%u is stored at address %u\n", p, &p);

    printf("%d is stored at address %u\n", y, &y);

    *p = 25;

    printf("\nNow x = %d\n",x);
 
    return 0;
}

/* SAMPLE TEST CASE:

Value of x is 10

10 is stored at address 3543982056
10 is stored at address 3543982056
10 is stored at address 3543982056
3543982056 is stored at address 3543982064
10 is stored at address 3543982060

Now x = 25


*/