//// CODE: P:210 > 7.18 - Program to print the following pattern:
/*
                            1
                           A B
                          2 3 4 
                         C D E F 
                        5 6 7 8 9
                        
*/

#include <stdio.h>
 
int main()
{
    int i, j, n, space, number = 1, alphabet = 'A';

    printf("\n");
 
    for(i = 1; i <= 5; i++)
    {
        for(space = 1; space <= (5-i); space++)
            printf(" ");
        
        for(j = 1; j <= i; j++)
        {
            if((i%2) == 0)
            {
                printf("%c ",alphabet);
                alphabet++;
            }

            else
            {
                printf("%d ",number);
                number++;
            }
        }
          printf("\n");
    }
      printf("\n");

    return 0;
}

/* Output:

    1 
   A B 
  2 3 4 
 C D E F 
5 6 7 8 9 


*/