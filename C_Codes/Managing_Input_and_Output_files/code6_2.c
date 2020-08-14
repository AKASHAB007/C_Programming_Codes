//// CODE: P:167 > 6.2 - To find the number of and sum of all the integers between 100 to 200 which are divisible by 7.

#include <stdio.h>
/*
int main()
{
    int i,sum=0,count;

    for(i=100;i<=200;i++)
    {
        if(i%7==0)
        {
            printf("%d\n",i);
            count++;
            sum+=i;
        }
    }
    printf("No.of Numbers divisible by 7 between 100 and 200 are: %d\n",count);

    printf("Sum of No.of Numbers divisible by 7 : %d\n",sum);
    return 0;
}
*/

//// CODE: General case :- Where Range and the number is User defined.

int main()
{
    int i,sum=0,count=0,num1,num2,n,ch;

    printf("Enter the lower Range: ");
    scanf("%d",&num1);

    printf("Enter the Upper Range: ");
    scanf("%d",&num2);

    printf("Enter the number: ");
    scanf("%d",&n);

    printf("\n");

    printf("Below are the numbers divisible by %d:\n",n);

    for(i=num1;i<=num2;i++)
    {

        if(i%n==0)
        {
            printf("%d\n",i);
            count++;
            sum+=i;
        }
    }
    printf("\n");

    printf("No.of Numbers divisible by %d between %d and %d are: %d\n",n,num1,num2,count);

    printf("\n");

    printf("Sum of No.of Numbers divisible by %d : %d\n",n,sum);
    return 0;
}
