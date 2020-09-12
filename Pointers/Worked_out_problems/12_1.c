//// CODE: P:383 > 12.1 - To print the address of a variable along with its value.

//* This program contains two programs so comment one and uncomment one and run it.

//. NOTE: Everytime the code is runed the address of 'a' changes.
/*
#include <stdio.h>

int main()
{
    int a = 10, y;
 
    int *p;

    p = &a; // Here the the address of 'a' is stored as value in 'p' variable.

    y = *p; // Here the value of 'p' points to the value of 'a' and is assigned to another variable 'y'. So indirectly 'y' has the value of 'a'.

    printf("\nThe address of a is %u.\n", &a);

    printf("\nThe value of a = %u.\n", y); // Here we can directly write *p instead of 'y' as argument.
 
    return 0;
}

/* Sample TEST CASE:

The address of a is 1067606232.

The value of a = 10.

*/

#include <stdio.h>
 
int main()
{
    char a;
    int x;
    float p, q;

    a = 'A';
    x = 125;
    p = 10.25;
    q = 18.76;

    printf("\n%c is stored at address %u.\n", a, &a);

    printf("%d is stored at address %u.\n", x, &x);

    printf("%.2f is stored at address %u.\n", p, &p); 

    printf("%.2f is stored at address %u.\n", q, &q);   
 
    return 0;
}

//. NOTE: Every time above code is runed the addresses of all the variables declared change.

/* Sample TEST CASE:

A is stored at address 3283191563.
125 is stored at address 3283191564.
10.25 is stored at address 3283191568.
18.76 is stored at address 3283191572.

*/