//// CODE: P:129 > 5.14 - To display the numbers in the following Way: 
//* Here we should give input as 5. You can input other number also.
/*                        5 4 3 2 1 
                            4 3 2 1
                              3 2 1
                                2 1
                                  1
*/

#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    /* Iterate through rows */
    for(i=rows; i>=1; i--)
    {
        /* Print leading spaces */
        for(j=0; j<(rows-i); j++)
        {
            printf("  ");
        }

        /* Iterate through columns to print numbers*/
        for(j=i; j>=1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}


//// * ANOTHER WAY : just a change in the spacing for() loop
  /*     
       // Print leading spaces 
       for(j=rows; j>i; j--)
        {
            printf("  ");
        }
  */