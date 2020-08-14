//// CODE: P:169 > 6.14 - To read a positive integer number and decide whether the number is prime number and display the output accordingly.
//   Also modify the program to count all the prime numbers that lie between 100 and 200.
//.  NOTE: A prime number is a positive integer that is divisible by 1 or by itself.

#include <stdio.h>

int main()
{
   //// To check whether the number entered is a prime number or not.

   int i,num,p=0;

   printf("Enter the Number to be checked: ");
   scanf("%d",&num);

   for(i=1; i<=num; i++)
   {
      if(num%i==0)
      {
         p++;
      }
   }
    
    if(p==2)
    printf("\n%d is a prime number.\n\n",num);

    else     
    printf("\n%d is not a prime number.\n\n",num);

   
   //// Modified Program: To count and display all the prime numbers between two input intervals.
    
   int n,number1,number2,k,remark,count=0;

   printf("Enter any two intervals ex:( 1 and 100 ): ");
   scanf("%d%d",&number1, &number2);

   printf("\nThe Prime Numbers between the given two intervals are :\n");

   for(n=number1; n<=number2; n++)
   {
      remark=0;
      for(k=2; k<=n/2; k++)
      {
         if((n%k)==0)
         {
            remark++;
            break;
         }
      }
      if(remark==0)
      {
         count++;
         printf("%d\n",n);
      }
   }
   printf("\n");

   printf("No.of Prime numbers between %d and %d are: %d\n\n",number1,number2,count);

   return 0;
}   