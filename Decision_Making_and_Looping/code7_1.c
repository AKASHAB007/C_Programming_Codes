//// CODE: P:207 > 7.1 - To reverse the digits of a given number using 'while' loop.
 
//. HINT: Use modulus operator to extract the last digit and the integer division by 10 to get the n-1 digit number from the n-digit number.
//. NOTE: Only 19 digits can be reversed using this program.

#include <stdio.h>
 
int main()
{
    unsigned long int num,rev=0,remainder;

    printf("Enter a 5-digit number to be reversed: ");
    scanf("%ld",&num);

    while((num) != 0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num /= 10;
    }

    printf("\n%ld",rev);
    printf("\n");
  
    return 0;
}

/* SAMPLE OUTPUT:
Enter a 5-digit number to be reversed: 123456789

987654321

*/