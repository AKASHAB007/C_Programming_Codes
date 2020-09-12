//// CODE: P:209 > 7.13(b) - Program to print the Square as shown below:
/*
                        S  S  S  S  S
                        S           S
                        S           S
                        S           S
                        S  S  S  S  S
*/

#include <stdio.h>
 
int main()
{
    int i,j;

    printf("\n");

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            if((i == 2 || i == 3 || i == 4) && (j == 2 || j == 3 || j == 4))
            {
            printf("   ");
            }
            else
            {
                printf("S  ");  
            }      
        }   
        printf("\n");
    }
    printf("\n");
  
   return 0;
}


/* TEST CASE: Output:

S  S  S  S  S 
S           S 
S           S 
S           S 
S  S  S  S  S 


*/