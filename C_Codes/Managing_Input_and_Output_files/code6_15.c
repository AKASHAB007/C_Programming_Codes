//// CODE: P:169 > 6.15 - To read a double-type value x that represents angle in radians and another variable TF that 
////                      represents the type of trigonometric function and display the value of:
/*                        (a) sin(x), if s or S is assigned to TF.
                          (b) cos(x), if c or C is assigned to TF.
                          (c) tan(x), if t or T is assigned to TF. 
*/

//. NOTE: Compile this program using this command :~ gcc code6_15.c -o a.out -lm

#include <stdio.h>
#include <math.h>

int main()
{
    double S,C,T,s,c,t,x;
    char TF;

    printf("\nAssign the value of TF : ");
    scanf("%c",&TF);

    printf("Enter the value of x in radians: ");
    scanf("%lf",&x);

    printf("\n");    

    if((TF == 'S') || (TF == 's'))
    {
        S = sin(x);
        printf("You have assigned sin(x) to TF - it's result is : %.2lf\n",S);
    }

    else if((TF=='C') || (TF=='c'))
    {
        C = cos(x);
        printf("You have assigned cos(x) to TF - it's result is : %.2lf\n",C);
    }

    else if((TF=='T') || (TF=='t'))
    {
        T = t = tan(x);
        printf("You have assigned tan(x) to TF - it's result is : %.2lf\n",T);
    }

    else
    {
       printf("Enter a valid key and try again:\n");
    }
    return 0;
}