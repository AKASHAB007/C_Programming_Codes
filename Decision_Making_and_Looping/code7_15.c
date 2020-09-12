//// CODE: P:209 > 7.15 - Program to print a square of size of 5 by using the character S and O in the center as shown below:
//. NOTE: This program is the modification of program code7_13.c
/*
    S  S  S  S  S 
    S  S  S  S  S 
    S  S  O  S  S 
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
            if(i == 3 && j == 3)
            printf("O  ");

            else
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
  S  S  O  S  S 
  S  S  S  S  S 
  S  S  S  S  S


*/