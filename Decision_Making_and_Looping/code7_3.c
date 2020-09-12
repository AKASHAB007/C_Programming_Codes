//// CODE: P:207 > 7.3 - The Numbers in the sequence 0 1 1 2 3 5 8 13 21 34 55 ... are called Fibonacci numbers.
/*  Write a program using do...while loop to calculate and print the first m Fibonacci numbers.   */

#include <stdio.h>
 
int main()
{
    int m, fib, num1=-1, num2=1;

    printf("Enter the value of m: ");
    scanf("%d",&m);

    printf("\n");

    do
    {
        fib = num1 + num2;
        num1 = num2;
        num2 = fib;
        printf("%d ",fib);
        m--;

    } while (m > 0);
    
    printf("\n");

   return 0;
}

/* SAMPLE OUTPUT:
Enter the value of m: 10

0 1 1 2 3 5 8 13 21 34 

*/