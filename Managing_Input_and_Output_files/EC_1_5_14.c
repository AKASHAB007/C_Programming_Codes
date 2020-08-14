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
        for(j=rows; j>i; j--)
        {
            printf(" ");
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