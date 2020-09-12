//// CODE: P:407 > 12.9 - Program to illustrate the use of struct pointers.

#include <stdio.h>
 
struct invent
{
    char *name[20];
    int number;
    float price;
};

int main()
{
    struct invent product[3], *ptr;
    printf("INPUT\n\n");

    for(ptr = product; ptr < product + 3; ptr++)
    {
        scanf("%s %d %f", ptr->name, &ptr->number, &ptr->price);
    }  
    printf("\nOUTPUT\n\n");

    ptr = product;

    while( ptr < product + 3)
    {
        printf("%-20s %5d %10.2f\n",
                ptr->name,
                ptr->number,
                ptr->price);
        ptr++;
    }
    printf("\n");

    return 0;
}

/* Sample TEST CASE OUTPUT:

INPUT

Washing_Machine  5  7500
Electric_Iron   12  350
Two_in_One      7   1250

OUTPUT

Washing_Machine          5    7500.00
Electric_Iron           12     350.00
Two_in_One               7    1250.00


*/