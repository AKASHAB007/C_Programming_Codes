//// CODE: P:209 > 7.17 - Program to print some coloured lines. (Here i am printing 6 lines with yellow and red colours each 3 lines)

#include <stdio.h>
 
int main()
{
    int i;
    printf("\033[01;33m");

    printf("\n");

    for(i = 1; i <= 3; i++)
    printf("_____________________\n");
    
    printf("\033[0m");

    printf("\n");

    printf("\033[1;31m");

    for(i = 1; i <= 3; i++)
    printf("_____________________\n");
  
    printf("\033[0m");

    printf("\n\n");
 
    return 0;
}