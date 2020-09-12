//. This Whole program contains many interview Questions: Uncomment then run it and see the ouput of each program.

//// Interview question : P:211 > 7.5 - Predicting the output of the program:
/*
#include <stdio.h>
 
int main()
{
    int i = 0;

    while(i++ < 5)
    {
        if(i == 0)
        printf("\nZERO\n");

        else
        {
            printf("\nHELLO WORLD\n");
        }
    }
     return 0;
}

/* Output will be: //* 5 times Hello world will be Printed.

HELLO WORLD

HELLO WORLD

HELLO WORLD

HELLO WORLD

HELLO WORLD

*/

//// Interview question: 7.4:
/*
#include <stdio.h>
 
int main()
{
    int x = 10, y = 20;

    x = x++ + ++y;
    y = ++x + y++;

    printf("x = %d\ny = %d\n",x,y); 
 
    return 0;
}

/* Output:

x = 32
y = 53

*/

//// Interview Question: 7.2:
/*
#include <stdio.h>
 
int main()
{
    int a;

    for(a = 0; a < 10; a++)
    {

    }
    printf("\n%d\n",a); // To print the final value of 'a'.
 
    return 0;
}

/* Output:

10

*/

//// Interview Question: 7.2:
/*
#include <stdio.h>
 
int main()
{
    int x;

    for(x = 9; x >= 0; x--)
    {

    }
    printf("\n%d\n",x); // To print the final value of 'x'.
 
    return 0;
}

/* Output:

-1

*/