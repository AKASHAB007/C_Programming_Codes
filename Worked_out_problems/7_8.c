//// CODE: P:189 > 7.8 - This program illustrates the use of break statement. 
/*                      This program reads a list of positive values and calculates their average.

. NOTE: In this program I have set 'm' to read values till 100 i.e Only 100 values can be read. (It can be varied)                      
*/                       

#include <stdio.h>
 
int main()
{
    int m;
    float x, sum, average;

    printf("This Program computes the average of a set of numbers\n");
    
    printf("\nEnter the values one after another\n");
    printf("Enter a NEGATIVE number at the end.\n\n");

    sum=0;
    for(m = 1; m <= 100; m++)
    {
        scanf("%f",&x);
        if( x  < 0)
        {
            break;
        }
        sum += x;
    }
    average = sum/(float)(m-1);
    printf("\n");

    printf("Number of values = %d\n", m-1);
    printf("Sum              = %.2f\n", sum);
    printf("Average          = %.2f\n", average);
    
    return 0;
}

/* SAMPLE OUTPUT:
This Program computes the average of a set of numbers

Enter the values one after another
Enter a NEGATIVE number at the end.

21 23 24 22 26 22 -1

Number of values = 6
Sum              = 138.00
Average          = 23.00

*/