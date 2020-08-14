//// CODE: P:169 > 6.11 - To read three integers and displays the output stating that they are the sides of a right angled triangle.
// For a Right-angled triangle it should always satisfy Pythagoras theorem which is: c^2 = a^2 + b^2, where c is the longest side.

#include <stdio.h>

int main()
{
    int a,b,c,A,B,C,i,j;

    printf("Enter the three integers: ");
    scanf("%d%d%d",&a,&b,&c);

    A = (a*a);
    B = (b*b);
    C = (c*c);

    if(C == (A + B))
    {
        printf("c = %d is the longest side i.e The Hypotenuse of the triangle\n",c);
        printf("\n");
        printf("a = %d and b = %d are the other two sides of the triangle.\n",a,b);
    }
    else if(A == (B + C))
    {
        printf("a = %d is the longest side i.e The Hypotenuse of the triangle\n",a);
        printf("\n");
        printf("b = %d and c = %d are the other two sides of the triangle.\n",b,c);
    }
    else 
    if(B == (C + A))
    {
        printf("b = %d is the longest side i.e The Hypotenuse of the triangle\n",b);
        printf("\n");
        printf("c = %d and a = %d are the other two sides of the triangle.\n",c,a);
    }
    return 0;
}