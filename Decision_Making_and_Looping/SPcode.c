//// SURPRISE CODE: P:208 > 7.5(b) - To print the following Output using 'for' loop.
/*                         
. SURPRISE CODE

                        * * * * * *                         *
                            * * * *                       * *
                              * * *   ======>>>>>       * * *
                                * *                   * * * *
                                  *                 * * * * *

*/

#include <stdio.h>
 
int main()
{
    int i,j,n,space;

    printf("Enter the No.of rows: ");
    scanf("%d",&n);
 
    printf("\n");

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= (n-i); j++)
        {
            printf("  ");    
        }

        for(j = i; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
 
   return 0;
}

/* SAMPLE OUTPUT:
Enter the No.of rows: 5

        * 
      * * 
    * * * 
  * * * * 
* * * * * 

*/