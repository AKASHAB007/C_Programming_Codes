//// CODE: P:207-08 > 7.4 - To solve the Investment equation: V = P(1 + r)^n
/* GIVEN : For various Values of P, r and n.
   P = 1000, 2000, 3000, ..., 10,000.
   r = 0.10, 0.11, 0.12, 0.13, ..., 0.20.
   n = 1, 2, 3, 4, ... , 10.

                       V = P(1 + r)^n
                                        where V = Value of money at the end of 'n' years.
                                              P = Principal amount.
                                              r = inrate
                                              n = period or time,

. NOTE: The value of money that is 'V' at the end of first year will be the principal amount 'P' of the next year.
* Compile this program using command > gcc code7_4.c -o a.out -lm < if any undefined of pow() pop's-up. 

*/

#include <stdio.h>
#include <math.h>
 
int main()
{
    int n;
    float V, P, r, N, a;

    printf("Enter the value of P, r and n: ");
    scanf("%f%f%d", &P, &r, &n);
 
    a = (1 + r);
    
    N = pow(a, n);
    
    V = P * N;

    printf("\nV = %.2f\nP = %.2f\nr = %.2f\nn = %d years\n\n", V, P, r, n);

    printf("V = %.2f is the value of the money at the end of %d years with:\nPrincipal amount P = %.2f and inrate = %.2f\n\n",V, n, P, r);
 
   return 0;
}

/* TEST CASE:
Enter the value of P, r and n: 1000 0.11 2

V = 1232.10
P = 1000.00
r = 0.11
n = 2 years

V = 1232.10 is the value of the money at the end of 2 years with:
Principal amount P = 1000.00 and inrate = 0.11

//// Another TEST CASE:
Enter the value of P, r and n: 10000 0.20 10 

V = 61917.39
P = 10000.00
r = 0.20
n = 10 years

V = 61917.39 is the value of the money at the end of 10 years with:
Principal amount P = 10000.00 and inrate = 0.20

*/