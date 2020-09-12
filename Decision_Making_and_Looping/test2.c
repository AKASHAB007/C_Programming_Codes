#include<stdio.h> 

int main()
{
   int n, a=1;

   printf("Enter value of n: ");
   scanf("%d",&n);

   // increasing portion of the pattern
   for(int i=1; i<=n+1; i++)
   {

     // print space
     for(int j=i; j<=n; j++)
     {
       printf("  ");
     }

     // print digit
     for(int k=1; k<=2*i-1; k++)
     {
        if(k<i) 
            printf("%d ",a++);

        else if(k==i) 
            printf("%d ",a);

        else 
            printf("%d ",--a);
      }

      // new line
      printf("\n");
   }

   // decreasing portion of the pattern
   for(int i=n; i>=1; i--)
   {
     // print space
     for(int j=n; j>=i; j--)
     {
       printf("  ");
     }

     // print digit
     for(int k=1; k<=2*i-1; k++)
     {
       if(k<i) 
          printf("%d ",a++);

       else if(k==i) 
          printf("%d ",a);

       else 
          printf("%d ",--a);
     }

     // new line
     printf("\n");
   }

   return 0;
}