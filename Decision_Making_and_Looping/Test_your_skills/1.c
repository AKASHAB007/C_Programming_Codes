//// CODE: P:178 > 1 - The factorial of an integer m is the product of consecutive integers from 1 to m. That is,
/*         Factorial m = m! = m x (m-1) x (m-2) x ...... x 1.                

 Write a program that computes and prints a table of factorials for any given m.
*/

//. NOTE: In this program we can only find factorial of small numbers that is upto 20 using int datatype, After that the results will be incorrect.
//. For larger number there is another method which will be programmed afterwards using Other concepts.

//* You can also check using double .Offcourse using double we can get factorial of a number till 170 as I have tested . After number 170 it showed me infinity.

#include <stdio.h>
 
int main()
{
   int m,i;
   unsigned long long int fac=1; // Since some number's factorial maybe very long.

   /* If you use > Unsigned int fac=1; then only till number 12 the factorial can be found. After number 12 the results will be incorrect.
      If you use > Unsigned long int fac=1; or Unsigned long long int fac=1; then also only till number 20 the results will be correct.
   */

   printf("Enter the number whose factorial is to be found: ");
   scanf("%d",&m);

   for(i=1; i<=m; i++)
   {
       fac *= i; 
   }
    printf("\nFactorial of %d that is %d! = %lld\n",m,m,fac);

   return 0;
}
