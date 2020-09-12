//// CODE: P:393 > 12.4 - Program using pointers to compute the sum of all elements stored in an array.

//. NOTE: Addresses of variables always change whenever the code is runed again and again.

#include <stdio.h>
 
int main()
{
    int *p, sum = 0, i;
    int x[5] = {5, 9, 6, 3, 7};

    i = 0, p = x;

    printf("\nElement  Value     Address\n\n");

    while(p <= &x[4])
    {
        printf(" x[%d]     %d       %u\n", i, *p, p);
        sum += *p;
        p++;
    }
    printf("\n Sum = %d\n", sum);

    printf("\n &x[0] = %u\n", &x[0]);

    printf("\n p = %u\n", p);
 
    return 0;
}

/* Sample TEST CASE Output:

Element  Value     Address

 x[0]     5       3722302576
 x[1]     9       3722302580
 x[2]     6       3722302584
 x[3]     3       3722302588
 x[4]     7       3722302592

 Sum = 30

 &x[0] = 3722302576

 p = 3722302596


 */