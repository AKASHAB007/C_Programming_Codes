//// CODE: P:128 > 5.2 - To read the Values from the user and perform certain math operations and print them on the same line.
/* The math operations are: a = (x+y)/(x-y);

                            b = (x+y)/2;

                            c = (x+y)*(x-y);
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int x,y,a,b,c;

    printf("Enter the values of x and y\n");
    scanf("%d%d",&x,&y);

    a = (x+y)/(x-y);

    b = (x+y)/2;

    c = (x+y)*(x-y);

    printf("(i) %d  (ii) %d  (iii) %d\n",a,b,c);
    return 0;
}