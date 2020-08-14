//// CODE: P:129 > 5.5 - This is an Interactive Program to demonstrate the process of multiplication. 
//* The program asks the user to input two 2-digit numbers and print them.

#include <stdio.h>

int main()
{
    int a,b,x,y,c,d,sum;

    printf("Enter two 2-digit numbers\n");
    scanf("%d%d",&a,&b);

    printf("Enter the second number of second digit number\n");
    scanf("%d",&x);

    printf("Enter the first number of second digit number\n");
    scanf("%d",&y);

    c = x*a;
    d = y*a;

    printf("\t\t%d\n\tX\t%d\n",a,b);
    
    printf("\t _____________\n");


    printf("%d X %d is\t%d\n",x,a,c);
    printf("%d X %d is\t%d\n",y,a,d);

    printf("\t _____________\n");

    sum = c+d;

    printf("Add them\t%d\n",sum);
    printf("\t _____________\n");

    return 0;
}