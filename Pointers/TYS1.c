//// CODE: P:398 > TYS1 - Program to print the address and values of a 2-D array.

#include <stdio.h>
 
int main()
{
    int a[2][2] = {{1,2},{3,4}};

    printf("\n");

    printf("The address and value of the first element of first 1-D array in a 2-D array are:\n"); // First element of 2-D array
    printf("Address = %u , Value = %d\n", *a , **a);

    printf("\nThe address and value of the second element of first 1-D array in a 2-D array are:\n"); // Second element of 2-D array
    printf("Address = %u , Value = %d\n", (*a+1), *(*a+1));

    printf("\nThe address and value of the first element of second 1-D array in a 2-D array are:\n"); // Third element of 2-D array
    printf("Address = %u , Value = %d\n", *(a+1) , *(*(a+1)));

    printf("\nThe address and value of the second element of second 1-D array in a 2-D array are:\n"); // Fourth element of 2-D array
    printf("Address = %u , Value = %d\n", (*(a+1)+1) , *(*(a+1)+1));
 
    return 0;
}


/* Sample TEST CASE OUTPUT:

The address and value of the first element of first 1-D array in a 2-D array are:
Address = 703952816 , Value = 1

The address and value of the second element of first 1-D array in a 2-D array are:
Address = 703952820 , Value = 2

The address and value of the first element of second 1-D array in a 2-D array are:
Address = 703952824 , Value = 3

The address and value of the second element of second 1-D array in a 2-D array are:
Address = 703952828 , Value = 4


*/