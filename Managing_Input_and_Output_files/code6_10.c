//// CODE: P:169 > 6.10 - To compute the real roots of a Quadratic equation: 
//*                                    ax^2 + bx + c = 0
/*  The roots are given by the equations:                        
                
                             ___________
                x1 = -b + ( | b^2 - 4ac  / 2a )

                             ___________
                x2 = -b - ( | b^2 - 4ac  / 2a )

. The program should request for the values of the constants a, b and c and print the values of x1 and x2. Use the following rules:
 (a) No solution, if both a and b are zero.
 (b) There is only one root, if a = 0 (x = -c/b)
 (c) There are no real roots, if b^2 - 4ac is negative.
 (d) Otherwise, there are two real roots.

 * Test this program with appropriate data so that all logical paths are working as per the design. Incorporate appropriate output messages.

*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,x;
    float x1,x2,discriminant,imaginary;
    float sqroot;

    printf("Enter the values of a, b and c : ");
    scanf("%f%f%f",&a,&b,&c);

    discriminant = (b*b) - (4*a*c);

    printf("\n");
    if(a==0 && b==0)
    {
        printf("NO SOLUTION\n");
    }

    else if(a==0)
    {
        x = -c/b;
        printf("There is only one root: x = %.2lf\n",x);
    }

    else if(discriminant<0)
    {
        x1 = x2 = -b / (2*a);
        imaginary = sqrt(-discriminant) /(2*a);

        printf("NO Real Roots\n");

        printf("Imaginary roots x1 = %.2lf+%.2lfi and x2 = %.2lf+%.2lfi\n",x1,imaginary,x2,imaginary);
    }

    else
        {
            sqroot =  sqrt(discriminant);

            x1 = (-b + (sqroot)) / (2*a);

            x2 = (-b - (sqroot)) / (2*a);

                printf("The value of x1 and x2 are:\n");

                printf("x1 = %.2lf\n",x1);
                printf("x2 = %.2lf\n",x2);
        }
    return 0;
}