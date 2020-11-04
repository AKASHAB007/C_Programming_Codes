//// CODE: DATA STRUCTURES > Problem-2 
/*      Using array of pointer concept : (a) Find the Product of two-matrices.
                                         (b) Sort 'n' names in alphabetical order.
*/

//. NOTE: Array name is itself the constant pointer to its first element.

// CODE: Problem-2 (a)
#include <stdio.h>
 
int main()
{
    int M1[20][20], M2[20][20], i, j, k, n, sum[20][20] = {0};

    printf("Enter the number of Rows and Columns: ");
    scanf("%d", &n);

    printf("\nEnter the elements of First Matrix M1: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("Enter element of index [%d] [%d] : ", i, j);
            scanf("%d", &M1[i][j]);
        }
    }
    printf("\nEntered First Matrix M1 is:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%3d ", M1[i][j]);
        }
        printf("\n");
    }
    
    printf("\nEnter the elements of Second Matrix M2: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("Enter element of index [%d] [%d] : ", i, j);
            scanf("%d", &M2[i][j]);
        }
    }
    printf("\nEntered Second Matrix M2 is:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%3d ", M2[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            for(k = 0; k < n; k++)
            {
                sum[i][j] += ( *(*(M1+i)+k) * *(*(M2+k)+j) );
            }
        }
    }
    printf("\nProduct of two Matrices is :\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%3d ", sum[i][j]);
        }
        printf("\n");
    }
    printf("\n");
 
    return 0;
}

/* Test Case Output:

Enter the number of Rows and Columns: 3

Enter the elements of First Matrix M1: 
Enter element of index [0] [0] : 1
Enter element of index [0] [1] : 2
Enter element of index [0] [2] : 6
Enter element of index [1] [0] : 4
Enter element of index [1] [1] : 3
Enter element of index [1] [2] : 8
Enter element of index [2] [0] : 7
Enter element of index [2] [1] : 9
Enter element of index [2] [2] : 6

Entered First Matrix M1 is:
  1   2   6 
  4   3   8 
  7   9   6 

Enter the elements of Second Matrix M2: 
Enter element of index [0] [0] : 5
Enter element of index [0] [1] : 6
Enter element of index [0] [2] : 3
Enter element of index [1] [0] : 1
Enter element of index [1] [1] : 4
Enter element of index [1] [2] : 5
Enter element of index [2] [0] : 6
Enter element of index [2] [1] : 9
Enter element of index [2] [2] : 7

Entered Second Matrix M2 is:
  5   6   3 
  1   4   5 
  6   9   7 

Product of two Matrices is :
 43  68  55 
 71 108  83 
 80 132 108

*/