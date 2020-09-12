//// CODE: P:181 > 7.4 - Program to print nth Fibonacci number.
/* According to Google search the first Fibonacci number is 0.
   
   So Fibonacci sequence value's is : 0, 1, 1, 2, 3, 5, .....
.  NOTE:    Fibonacci number places : 1  2  3  4  5  6 ... 
*/

#include <stdio.h>
 
void main()
{
   int num1=0, num2=1, n, i, fib;

   printf("\nEnter the value of n: ");
   scanf("%d",&n);
        
    if(n == 1 || n == 2)
    {
        printf("\nnth fibonacci number (for n = %d) = %d\n",n,n-1);
    }

    else
    {
        fib = num1 + num2;
        for(i=3; i <= n; i++)
        {
            fib = num1 + num2;
            num1 = num2;
            num2 = fib;
        }
        printf("\nnth fibonacci number (for n = %d) = %d\n",n,fib);
    }
}

/* SAMPLE OUTPUT:
Enter the value of n: 10

nth fibonacci number (for n = 10) = 34

*/