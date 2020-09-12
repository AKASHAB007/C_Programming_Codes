//// CODE: P:404 > 12.8 - Program that uses a function pointer as a function argument.

#include <stdio.h>
#include <math.h>

#define PI 3.1415926

double y(double);
double cos(double);
double table(double(*f)(), double, double, double);

int main()
{
    printf("\nTable of y(x) = 2*x*x-x+1\n\n");
    table(y, 0.0, 2.0, 0.5); // First Function call by passing 'y' as function.

    printf("\nTable of cos(x)\n\n");
    table(cos, 0.0, PI, 0.5); // Second Function call by passing 'cos' as function.

    return 0;
}

double table(double(*f)(), double min, double max, double step)
{
    double a, value;

    for(a = min; a <= max; a += step)
    {
        value = (*f)(a);
        printf("%5.2f  %10.4f\n", a, value);
    }
}

double y(double x)
{
    return (2*x*x-x+1);
}

/* TEST CASE OUTPUT:

Table of y(x) = 2*x*x-x+1

 0.00      1.0000
 0.50      1.0000
 1.00      2.0000
 1.50      4.0000
 2.00      7.0000

Table of cos(x)

 0.00      1.0000
 0.50      0.8776
 1.00      0.5403
 1.50      0.0707
 2.00     -0.4161
 2.50     -0.8011
 3.00     -0.9900


*/