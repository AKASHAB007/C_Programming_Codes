//// CODE: P:168 > 6.7 - To display the Floyd's Triangle in the following manner: (Input can be given any No.of rows)
/*                       1
                         0 1
                         1 0 1
                         0 1 0 1
                         1 0 1 0 1 
                         and so on.
*/

#include <stdio.h>

int main()
{
    int i,j,rows,number1,number2;

    printf("Enter the NO.OF rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        if(i%2==0)
        {
            number1=1;
            number2=0;
        }
        else
        {
            number1=0;
            number2=1;
        }
        
      for(j=1;j<=i;j++)
        {
            if(j%2==0)
	            printf("%d ",number1);
	        else
	            printf("%d ",number2); 
        }
        printf("\n");
    }
    return 0;
}


 
