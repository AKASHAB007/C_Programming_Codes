//// CODE: P:167 > 6.1 - To check whether the number is ODD or EVEN :
//                       (a) Without else statement.
//                       (b) With else statement.
//. NOTE: Only Positive integers should be user input.

#include <stdio.h>
/*
int main()
{
    int n;
    printf("(a) Without else statement:\n");

    printf("Enter the Number: ");
    scanf("%d",&n);

    (n%2==0) ? printf("Number is EVEN\n") : printf("Number is ODD\n"); //* Using CONDITIONAL operator.

    return 0;    
}
*/
int main()
{
    int n;
    printf("(a) With else statement:\n");

    printf("Enter the Number: ");
    scanf("%d",&n);

    if(n%2==0)
    printf("Number is EVEN\n");

    else
    printf("Number is ODD\n");
    
    return 0;    
}
