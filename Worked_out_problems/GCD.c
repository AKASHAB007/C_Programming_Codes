#include <stdio.h>
#include "GCD.h"
#include <math.h>

int main()
{
     int num1,num2;
     
     
     printf("Enter the two numbers whose GCD is to be found: ");
     scanf("%d %d", &num1,&num2);
     
     printf("\n GCD of %d and %d is %d\n",num1,num2,GCD(num1,num2));
     
}
