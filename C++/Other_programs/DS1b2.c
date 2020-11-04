//// CODE: DATA STRUCTURES > Problem-1 (b)
/*      Find the following for a matrix. Use the Concept of pointer of 2-D array:
        (1) Sum of Principal diagonal elements.
        (2) Sum of Secondary diagonal elements.
        (3) Sum of all elements.
*/

#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int a[2][2] = {{2,8},{3,12}}; // Compiler defines the array name 'a' as a constant pointer pointing to the first element address.
    int i, j, sum = 0, sum1 = 0, sum2 = 0;

    for(i = 0; i <= 1; i++)
    {
        for(j = 0; j <= 1; j++)
        {
            sum2 += *(*(a+i) + j);

            if(i == j)
                sum += *(*(a+i) + j);

            if(i+j == 2-1)
                sum1 += *(*(a+i)+ j);
        }
    }
    printf("\n(1) Sum of the Principal diagonal elements is %d\n", sum);

    printf("\n(2) Sum of the secondary diagonal elements is %d\n", sum1);

    printf("\n(3) Sum of the all the elements is %d\n", sum2);

    return 0;
}

/* Test Case Output:

(1) Sum of the Principal diagonal elements is 14

(2) Sum of the secondary diagonal elements is 11

(3) Sum of the all the elements is 25

*/