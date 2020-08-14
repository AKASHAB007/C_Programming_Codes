//// CODE: P:168 > 6.7 - To display the Floyd's Triangle: (Input can be given any No.of rows)
/*                       1
                         2 3
                         4 5 6
                         7 8 9 10
                         11 12 13 14 15 
                         and so on.
*/

#include <stdio.h>

int main()
{
    int i,j,rows,number=1;

    printf("Enter the NO.OF rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",number);
            ++number;
        }
        printf("\n");
    }
    return 0;
}


 
