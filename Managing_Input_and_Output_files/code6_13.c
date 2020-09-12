//// CODE: P:169 > 6.13 - Program to Compute and display the sum of all integers that are divisible by 6 but not divisible by 4.

////                      and lie between 0 to 100. This program should also count and display the number of such values. 

#include <stdio.h>

int main()
{
    int i,count=0;

    printf("The numbers that are divisible by 6 but not divisible by 4 are:\n");
    for(i=0; i<=100; i++)
    {
       if((i%6==0) && (i%4!=0))
       {
            printf("%d\n",i); 
            count++;
       }      
    }
    printf("Count of such numbers is : %d\n",count);
    return 0;
}


/*
//// CODE: General Form: Here the dividable and non-dividable numbers should be inputed.

int main()
{
    int n1,n2,i,count=0;

    printf("Enter the dividable number and non-dividable number: ");
    scanf("%d%d",&n1,&n2);

    printf("The numbers that are divisible by %d but not divisible by %d are:\n",n1,n2);
    for(i=0; i<=100; i++)
    {
       if((i%n1==0) && (i%n2!=0))
       {
            printf("%d\n",i); 
            count++;
       }      
    }
    printf("Count of such numbers is : %d\n",count);
    return 0;
}
*/
