//// CODE: P:192-93 > 7.10 : This program illustrates the use of continue statement,
/* 
    The program evaluates the sqaure root of a series of numbers and prints the results. The process stops when the number 9999 is typed in.
*        The continue statement is used to bypass the negative input. 
    The final output includes the number of positive values evaluated and the number of negative numbers encountered.
*/

//. NOTE : USE command > gcc 7_10.c -o a.out -lm  < to overcome the error of Undefined referenece to sqroot. Because <math.h> is included nut still sometimes the error may appear.

#include <stdio.h>
#include <math.h> 

int main()
{
    int count = 0, negative = 0;
    double number, sqroot;

    printf("Enter 9999 to STOP\n");

    while(count <= 100)
    {
        printf("Enter a number: ");
        scanf("%lf", &number);

        if(number == 9999)
        {
            break;
        }

        if(number < 0)
        {
            printf("Number is Negative\n\n");
            negative++;
            continue;
        }

        sqroot = sqrt(number);
        printf("Number      = %.2lf\nSquare root = %.2lf\n\n",number, sqroot);
        count++;
    }
    printf("\nNumber of items done = %d\n", count);

    printf("\nNegative items = %d\n",negative);

    printf("END OF DATA\n");
     
   return 0;
}

/* SAMPLE OUTPUT: 

Enter 9999 to STOP
Enter a number: 25.0
Number      = 25.00
Square root = 5.00

Enter a number: 40.5
Number      = 40.50
Square root = 6.36

Enter a number: -9
Number is Negative

Enter a number: 16
Number      = 16.00
Square root = 4.00

Enter a number: -14.75
Number is Negative

Enter a number: 80
Number      = 80.00
Square root = 8.94

Enter a number: 9999

Number of items done = 4

Negative items = 2
END OF DATA

*/