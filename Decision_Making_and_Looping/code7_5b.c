#include <stdio.h>
 
int main()
{
    int i,j,n,space;

    printf("Enter the No.of rows: ");
    scanf("%d",&n);
 
    printf("\n");

    for(i = n; i >= 1; i--)
    {
        for(j = 0; j <= (n-i); j++)
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