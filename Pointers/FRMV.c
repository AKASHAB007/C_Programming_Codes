//// CODE: P:398 > FRMV - Function Returning Multiple Values example.

#include <stdio.h>
 
void mathoperation(int x, int y, int *s, int *d);

int main()
{
    int x = 20, y = 10, s, d;
    mathoperation(x, y, &s, &d);

    printf("\ns = %d\nd = %d\n\n", s, d);    
 
    return 0;
}

void mathoperation(int a, int b, int *sum, int *diff)
{
    *sum = a + b;
    *diff = a - b;
}

/* TEST CASE OUTPUT:

s = 30
d = 10

*/
