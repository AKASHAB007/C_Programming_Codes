//// CODE: P:181 > 7.5 - Program to print all the prime numbers between 1 to n, where 'n' is the value supplied by the user.
// This is little bit complicated program compared to other methods of printing prime number from 1 to n.


#include <stdio.h>
 
int main()
{
   int prime(int);
   int n,i;
   int temp;

   printf("Enter the value of n: ");
   scanf("%d", &n);

   printf("\nPrime numbers between 1 and %d are:\n",n);

   for(i=2; i<=n; i++)
   {
       temp = prime(i);
       if(temp == -99)
       {
            continue;
       }
       else
       {       
         printf("%d  ",i);
       }
    }
    printf("\n\n");
   return 0;
}

int prime(int num)
{
    int j;
    for(j=2; j<num; j++)
    {
        if(num%j==0)
            return (-99);
    }
    if(j==num)
        return (num);
}

/* SAMPLE OUTPUT:
Enter the value of n: 50

Prime numbers between 1 and 50 are:
2  3  5  7  11  13  17  19  23  29  31  37  41  43  47 

*/