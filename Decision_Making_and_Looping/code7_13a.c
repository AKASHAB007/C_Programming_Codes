//// CODE: P:209 > 7.13(a) - Program to print a square of size of 5 by using the character S as shown below:
/*
    S  S  S  S  S 
    S  S  S  S  S 
    S  S  S  S  S 
    S  S  S  S  S 
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
            printf("S  ");
        }
        printf("\n");
    }
    printf("\n");
  
   return 0;
}

/* SAMPLE OUTPUT:

  S  S  S  S  S 
  S  S  S  S  S 
  S  S  S  S  S 
  S  S  S  S  S 
  S  S  S  S  S


*/