//// CODE: P:186 > 7.7 - This program shows how to write a program to display a pyramid shown below.
/*
                                         0
                                      1  0  1
                                   2  1  0  1  2
                                3  2  1  0  1  2  3
                             4  3  2  1  0  1  2  3  4
                          5  4  3  2  1  0  1  2  3  4  5
                       6  5  4  3  2  1  0  1  2  3  4  5  6
                    7  6  5  4  3  2  1  0  1  2  3  4  5  6  7

*/

//. NOTE: I don't have <conio.h> header file so i created my own header file . You can use the pre-build header file for this by removing my header file.

#include <stdio.h>
#include "conio.h"
#include <stdlib.h>

int main()
{
   int num, i, y, x=40;
   clrscr();

   printf("\nEnter a number for \ngenerating the pyramid:\n");
   scanf("%d",&num);

   printf("\n\n\n\n\n\n\n\n");

   for(y = 0; y <= num; y++)
   {
       gotoxy(x,y+1);
       for(i = 0-y; i <= y; i++)
       {
           printf("%3d",abs(i));
       }
       x = x-3;
   }
   printf("\n");
    return 0;
}

/*SAMPLE OUTPUT:

Enter the number for 
generating the pyramid:
7

                                         0
                                      1  0  1
                                   2  1  0  1  2
                                3  2  1  0  1  2  3
                             4  3  2  1  0  1  2  3  4
                          5  4  3  2  1  0  1  2  3  4  5
                       6  5  4  3  2  1  0  1  2  3  4  5  6
                    7  6  5  4  3  2  1  0  1  2  3  4  5  6  7



*/


