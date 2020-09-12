//// CODE: P:390 > 12.3 - Program to illustrate the use of pointers in arithmetic operations.

//. NOTE: Addresses of variables always change whenever the code is runed again and again.

#include <stdio.h>
 
int main()
{
    int a, b, *p1, *p2, x, y, z;
    a = 12;
    b =4; 
    p1 = &a;
    p2 = &b;

    x = *p1 * *p2 - 6;
    y = 4* - *p2 / *p1 + 10;

    printf("\nAddress of a = %u\n", p1);
    printf("Address of b = %u\n", p2);

    printf("\n");

    printf("a = %d, b = %d\n", a, b);
    printf("x = %d, y = %d\n", x, y);
 
    *p2 = *p2 + 3;
    *p1 = *p2 - 5;

    z = *p1 * *p2 - 6;

    printf("\na = %d, b = %d, z = %d\n", a, b, z);

    return 0;
}

/* SAMPLE TEST CASE OUTPUT:

Address of a = 2534495700
Address of b = 2534495704

a = 12, b = 4
x = 42, y = 9

a = 2, b = 7, z = 8

*/