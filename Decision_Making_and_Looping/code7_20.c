//// CODE: P:210 > 7.20 - Program to print the following pattern of 0 and 1:
/*
                          1
                          0 1
                          1 0 1
                          0 1 0 1

*/

#include <stdio.h>
 
int main()
{
    int i,j,n1,n2;

    printf("\n");

    for(i = 1; i <= 4; i++)
    {
        if( (i%2) == 0)
        {
            n1 = 1;
            n2 = 0;
        }
        else
        {
            n1 = 0;
            n2 = 1;
        }
        
        for(j = 1; j <= i; j++)
        {
            if( (j%2) == 0)
                printf("%d ",n1);

            else
            {
                printf("%d ",n2);
            }
        }
        printf("\n");
    }
    printf("\n");
  
    return 0;
}

/* TEST CASE:

1 
0 1 
1 0 1 
0 1 0 1

*/