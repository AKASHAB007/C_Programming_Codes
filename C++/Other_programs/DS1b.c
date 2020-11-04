//// CODE: DATA STRUCTURES > Problem-1 (b)
/*      Find the following for a matrix. Use the Concept of pointer of 2-D array:
        (1) Sum of Principal diagonal elements.
        (2) Sum of Secondary diagonal elements.
        (3) Sum of all elements.
*/

#include <stdio.h>

int main()
{
    int num[20][20], i, j, sum = 0, sum1 = 0, sum2 = 0, n;

    printf("Enter Number of Rows and Columns of the Matrix: ");
    scanf("%d", &n); //* Only one input is taken because we are considering it as a Square Matrix i.e Rows = Columns.

    printf("Enter Elements of Matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("Enter element of Index [%d] [%d] : ",i,j);
            scanf("%d", &num[i][j]);
        }
    }
    printf("\n");

    printf("Matrix Entered is: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            sum2 += *(*(num+i)+j);

            if(i == j)
                sum += *(*(num+i)+j);

            if(i+j == n-1)
                sum1 += *(*(num+i)+j);
        }
    }

    printf("\n(1) Sum of the Principal Diagonal elements = %d\n", sum);

    printf("\n(2) Sum of the Secondary Diagonal elements = %d\n", sum1);

    printf("\n(3) Sum of all the elements in the matrix = %d\n", sum2);

    return 0;
}

/* Test Case Output:

Enter Number of Rows and Columns of the Matrix: 3
Enter Elements of Matrix:
Enter element of Index [0] [0] : 2
Enter element of Index [0] [1] : 4
Enter element of Index [0] [2] : 6
Enter element of Index [1] [0] : 8
Enter element of Index [1] [1] : 1
Enter element of Index [1] [2] : 7
Enter element of Index [2] [0] : 9
Enter element of Index [2] [1] : 3
Enter element of Index [2] [2] : 5

Matrix Entered is: 
2 4 6 
8 1 7 
9 3 5 

(1) Sum of the Principal Diagonal elements = 8

(2) Sum of the Secondary Diagonal elements = 16

(3) Sum of all the elements in the matrix = 45

*/