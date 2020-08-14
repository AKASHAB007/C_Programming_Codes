//// CODE: P:170 > 6.17 - To input two numbers a and b and display whether:
/*                        (a) a is greater than b.
//                                or
                          (b) b is greater than a.
//                               or
                          (c) a is equal to b
*/

#include <stdio.h>

//// 1. In this Program i have used user-defined header file. (Off-course i have defined it named: "code6_17.h" )

/*#include "code6_17.h"

int main()
{
    int a,b;

    printf("Enter the values of a and b: ");
    scanf("%d%d",&a,&b);

    printf("The greatest between %d and %d is %d\n",a,b,(GTO(a,b)));
    return 0;
}
*/

//// Simple program without including user-defined header file:

int main()
{
    int a,b;

    printf("Enter the values of a and b: ");
    scanf("%d%d",&a,&b);

    if(a>b)
    printf("The greatest between %d and %d is %d\n",a,b,a);

    else if(b>a)
    printf("The greatest between %d and %d is %d\n",a,b,b);

    else
    if(a==b)
    printf("The greatest between %d and %d is %d because a = b.\n",a,b,a);

    return 0;
    
}