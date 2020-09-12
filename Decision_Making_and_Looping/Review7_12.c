//// CODE: P:205 > Review Question 7.12 - Write a for statement to print each of the following sequences of integers.
/*                              
                    (a) 1, 2, 4, 8, 16, 32
                    (b) 1, 3, 9, 27, 81, 243
                    (c) -4, -2, 0, 2, 4
                    (d) -10, -12, -14, -18, -26, -42
*/

#include <stdio.h>

//// Program to print (a) 1, 2, 4, 8, 16, 32 
/* Only remove this opening comment to use this below program. 

int main()
{
    int i, a = 1;

    printf("\n");

    for(i = 1; i <= 5; i++)
    {
        if(i == 1)
        printf("%d ",a);

        a = a*2;
        printf("%d ",a);
    }
    printf("\n\n");
  
   return 0;
} 

/* Test case: OUTPUT:

1 2 4 8 16 32

*/

//// Program to print (b) 1, 3, 9, 27, 81, 243
/* Only remove this opening comment to use this below program. 

int main()
{
    int i, a = 1;

    printf("\n");

    for(i = 1; i <= 5; i++)
    {
        if(i == 1)
        printf("%d ",a);

        a = a*3;
        printf("%d ",a);
    }
    printf("\n\n");

    return 0;
}

/* Test Case: OUTPUT:

1 3 9 27 81 243

*/

//// Program to print (c) -4, -2, 0, 2, 4
/* Only remove this opening comment to use this below program 

int main()
{
   int i, a = -6;

    printf("\n");

   for(i = 1; i <= 5; i++)
   {
       a = a + 2;
       printf("%d ",a);
   } 
   printf("\n\n");
 
   return 0;
}

/* Test Case: Output:

-4 -2 0 2 4

*/

//// Program to print (d) -10, -12, -14, -18, -26, -42
/* Only remove this opening comment to use this below program 
 
int main()
{
    int i, a, b = -10, c = 1;

    printf("\n");

    for(i = 1; i <= 5; i++)
    {
        if(i == 1)
        printf("%d ",b);

        a = b - (c * 2);
        c = c * 2;
        printf("%d ",a);
    }
    printf("\n\n");
  
   return 0;
}

/* Test Case: Output:

-10 -12 -14 -18 -26 -42 

*/