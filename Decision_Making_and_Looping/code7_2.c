//// CODE: P:207 > 7.2 - To compute the sum of the digits of a given integer number.

//. NOTE: The below prorgam can only add upto 19 digits in a number.
#include <stdio.h>

int main()
{
    unsigned long int num,t,rem,sum=0;  // rem = remainder.

    printf("Enter the Number:\n");
    scanf("%ld",&num);

    t = num;

    while (t != 0)
    {
        rem = t % 10;
        sum += rem;
        t = t/10;
    }
    printf("\nThe Sum of the digits of %ld = %ld\n", num, sum);
 
   return 0;
}


//// CODE: The below code doesn't make use of modulus operator.
//// Advantage of this program is that large number can be sumed-up. (comment the above program and Uncomment the below program to use it)

/*
int main()
{
   int c, sum, t;
   char n[1000];
   
   printf("Enter the integer:\n");
   scanf("%s", n);
 
   sum = c = 0;
   
   while (n[c] != '\0') {
      t   = n[c] - '0'; // Converting character to integer
      sum += t;
      c++;
   }
 
   printf("\nSum of digits of %s = %d\n", n, sum);
 
   return 0;
}*/