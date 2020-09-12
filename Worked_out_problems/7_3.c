//// CODE: P:179 > 7.3 - To print the "Powers of 2" table for the power 0 to 20 as shown below, both positive and negative.
/*

2 to power of n     n       2 to power -n
____________________________________________
         1          0       1.000000000000
         2          1       0.500000000000
         4          2       0.250000000000
         8          3       0.125000000000
        16          4       0.062500000000
        32          5       0.031250000000
        64          6       0.015625000000
       128          7       0.007812500000
       256          8       0.003906250000
       512          9       0.001953125000
      1024         10       0.000976562500
      2048         11       0.000488281250
      4096         12       0.000244140625
      8192         13       0.000122070312
     16384         14       0.000061035156
     32768         15       0.000030517578
     65536         16       0.000015258789
    131072         17       0.000007629395
    262144         18       0.000003814697
    524288         19       0.000001907349
   1048576         20       0.000000953674
____________________________________________

*/

#include <stdio.h>
 
int main()
{
   long int p;
   int n;
   double q;

   printf("____________________________________________\n");
   printf("2 to power of n     n       2 to power -n\n");
   printf("____________________________________________\n");

   p=1;
   for(n = 0; n < 21; n++)
   {
       if (n==0)
        p = 1;
       
       else
       {
           p = p * 2;
       }
       q = 1.0/(double)p;
        printf("%10ld %10d %20.12lf\n",p, n, q);
   }
    printf("____________________________________________\n");
 
   return 0;
}