//// CODE: P:167 > 6.3 - To find the values of x1 and x2 of the given expressions:
// *                      ax1 + bx2 = m 
// *                      cx1 + dx2 = n
//. NOTE: provided (ad-cb != 0) .

#include <stdio.h>

int main()
{
    double a,b,c,d,m,n;
    int g1;

    float x1,x2;

    printf("Equations are of type:\n");
    printf("ax1 + bx2 = m\n");
    printf("cx1 + dx2 = n\n");

    printf("\n");

    g1:

    printf("Enter the values of a, b, c, d, m and n: ");
    scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m,&n);

    x1 = (m*d - b*n)/(a*d-c*b) ;
    x2 = (n*a-m*c)/(a*d-c*b) ;

    if((a*d-c*b)==0)
    {
        printf("Error !!! Please enter valid inputs.\n");
          printf("\n");
            goto g1;
    }

    printf("\n");
    
    printf("x1 = %.2f\nx2 = %.2f\n",x1,x2);

   // printf("%d + %d = %d\n",x5,x6,n);


    return 0;
}