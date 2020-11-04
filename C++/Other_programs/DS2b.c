//// CODE: DATA STRUCTURES > Problem-2 (b)
/*      Using array of pointer concept : (a) Find the Product of two-matrices.
                                         (b) Sort 'n' names in alphabetical order.
*/

//. NOTE: Array name is itself the constant pointer to its first element.

// CODE: Problem-2 (b)
#include <stdio.h>
#include <string.h> 

int main()
{
    char names[6][20] = { "Iron_Man",
                          "Thor",
                          "Black_Panther",
                          "Hulk",
                          "Captain_Marvel",
                          "Captain_America",
                        };
    
    int i, j;
    char temp[20];
    
    printf("\033[01;31m"); //* This statement gives the next statement Bold Red Color.
    printf("\nGiven array is:\n");
    printf("\033[0m");

    for(i = 0; i < 6; i++)
    {
        printf("%s\n", names[i]);
    }

    for(i = 0; i < 5; i++)
    {
        for(j = i+1; j < 6; j++)
        {
            if(strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\033[01;33m"); //* This statement gives the next statement bold Yellow Color.
    printf("\nSorted array is:\n");
    printf("\033[0m");

    for(i = 0; i < 6; i++)
    {
        printf("%s\n", names[i]);
    }
 
    return 0;
}

/* Test Case Output:

Given array is:
Iron_Man
Thor
Black_Panther
Hulk
Captain_Marvel
Captain_America

Sorted array is:
Black_Panther
Captain_America
Captain_Marvel
Hulk
Iron_Man
Thor

*/