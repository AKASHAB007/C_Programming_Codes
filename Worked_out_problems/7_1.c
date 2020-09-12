//// CODE: P:174 > 7.1 - A program to evaluate the equation:
/*                       
*                           y = x^n    (x to the power n)
                        
                        where n is a non-negative integer.
*/

#include <stdio.h>
 
int main()
{
   int count,n;
   float x,y;

   printf("Enter the values of x and n : ");
   scanf("%f %d", &x, &n);

   y = 1.0;
   count = 1;

   while(count<=n)
   {
       y = y*x;
       count++;
   }
    printf("\nx = %f; n = %d;\nx to power of n = %f\n",x,n,y);

   return 0;
}


//// SAMPLE OUTPUT:
/*
Enter the values of x and n : 2.50 4

x = 2.500000; n = 4;
x to power of n = 39.062500

*/
