//// CODE: P:128 > 5.4 - To print the * character based on the user mentioned input.
/* For Ex: floating input : 4.36
   *  *  *  *
   *  *  *  *  4.36
   *  *  *  *
*/ 

#include <stdio.h>

int main()
{
    float a;
    int x,y,i,j;

    printf("Enter the floating point value ranging between 0.0 to 20.0\n");
    scanf("%f",&a);

    printf("%.1f\n",a);  // This step is to print simplified form of entered float value with precision as 1.


    printf("Enter the Integer value given above before decimal point\n");
    scanf("%d",&x);

    printf("Enter the value given above after decimal point\n");
    scanf("%d",&y);

    for(i=1;i<=y;i++)
    {
        for(j=1;j<=x;j++)
        {
            if(i==2 && j==4)
                printf("*\t%.2f",a);
            else
            {
                 printf("*\t");
            }
            
        }
        printf("\n");
    }
    return 0;

}