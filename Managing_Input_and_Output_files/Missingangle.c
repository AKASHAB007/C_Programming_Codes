//// CODE: To find the Missing angle of a triangle.

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the First angle in deg\n");
    scanf("%d", &a);

    printf("Enter the Second angle in deg\n");
    scanf("%d", &b);
 
    if(a!=90 && b!=90)
    {
    c=180-a-b;
    printf("The third element of the triangle is %d deg\n",c);
    }

    if(a==90 && b==90)
    printf("Practically Not possible\n");

    return 0;
}