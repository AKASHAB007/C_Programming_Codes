//// CODE: P:159 > 6.8 - To determine the Greatest Common Divisor (GCD) of two numbers:

#include <stdio.h>
#include <math.h>

int GCD(int m, int n);
int main()
{
    int num1,num2;
    
    printf("Enter two numbers whose GCD is to be found: ");
    scanf("%d%d",&num1, &num2);
    
    printf("\nGCD of %d and %d is %d\n",num1, num2, GCD(num1,num2));
    return 0;
}

int GCD(int a,int b)
{
    if(b>a)
        return GCD(b,a);
    if(b==0)
        return a;
    else
        return GCD(b,a%b);
}

/* Sample input:
18 12
    
// Sample output:
Enter two numbers whose GCD is to be found: 18 12
GCD of 18 and 12 is 6

*/