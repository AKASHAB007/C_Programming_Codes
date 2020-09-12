//. CODE: This Whole program contains many programs so Uncommment a particular one and run it then see the output of each program.

//// CODE: 1 > To print the following pattern of stars (Asterisks) as shown below.
/*
                            * 
                            * * 
                            * * * 
                            * * * * 
                            * * * * *
*/

/*
#include <stdio.h>
 
int main()
{
    int i, j;

    printf("\n");

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
 
    return 0;
} */

//// CODE: 2 > To print the following pattern of stars (Asterisks) as shown below:
/*
                                * 
                              * * 
                            * * * 
                          * * * * 
                        * * * * * 
*/

/*
#include <stdio.h>
 
int main()
{
    int i, j, space;

    printf("\n");

    for(i = 1; i <= 5; i++)
    {
        for(space = 1; space <= (5-i); space++)
            printf("  ");

        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
 
    return 0;
} */

//// CODE: 3 > To print the following pattern of stars (Asterisks) as shown below:
/*
                        * * * * * 
                        * * * * 
                        * * * 
                        * * 
                        *        

*/
/*
#include <stdio.h>
 
int main()
{
    int i, j;

    printf("\n");

    for(i = 5; i >= 1; i--)
    {
        for(j = i; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
  
    return 0;
} */

//// CODE: 4 > To print the following pattern of stars (Asterisks) as shown below:
/*
                        * * * * * 
                          * * * * 
                            * * * 
                              * * 
                                * 

*/
/*
#include <stdio.h>
 
int main()
{
    int i, j, space;

    printf("\n");

    for(i = 5; i >= 1; i--)
    {
        for(space = 1; space <= (5-i); space++)
            printf("  ");

        for(j = i; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
} */

//// CODE: 5 > To print the following pattern of stars (Asterisks) as shown below:
/*
                            * 
                           * * 
                          * * * 
                         * * * * 
                        * * * * *

*/
/*
#include <stdio.h>
 
int main()
{
    int i, j, space;

    printf("\n");

    for(i = 1; i <= 5; i++)
    {
        for(space = 1; space <= (5-i); space++)
            printf(" ");

        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
 
    return 0;
} */

//// CODE: 6 > To print the following pattern of stars (Asterisks) as shown below:
/*
                        * * * * * 
                         * * * * 
                          * * * 
                           * * 
                            * 

*/
/*
#include <stdio.h>
 
int main()
{
    int i, j, space;

    printf("\n");

    for(i = 5; i >= 1; i--)
    {
        for(space = 1; space <= (5-i); space++)
            printf(" ");

        for(j = i; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
} */

//// CODE: 7 > To print the following pattern of stars (Asterisks) as shown below:
/*
                                * 
                              * * * 
                            * * * * * 
                          * * * * * * * 
                        * * * * * * * * *   
*/
/*
#include <stdio.h>

int main() 
{
    int i, space, k;
  
    printf("\n");
  
    for (i = 1; i <= 5; i++, k = 0) 
    {
       for (space = 1; space <= (5 - i); space++) 
         printf("  ");
      
       while (k != 2 * i - 1) 
       {
          printf("* ");
          k++;
       }
       printf("\n");
    }
    printf("\n");

    return 0;
} */

//// CODE: 8 > To print the following pattern of stars (Asterisks) as shown below:
/*
                        * * * * * * * * * 
                          * * * * * * * 
                            * * * * * 
                              * * * 
                                * 

*/
/*
#include <stdio.h>

int main() 
{
    int i, space, k;
  
    printf("\n");
  
    for (i = 5; i >= 1; i--, k = 0) 
    {
       for (space = 1; space <= (5 - i); space++) 
         printf("  ");
      
       while (k != 2 * i - 1) 
       {
          printf("* ");
          k++;
       }
       printf("\n");
    }
    printf("\n");

    return 0;
} */

//. CODE: From now onwards the printing of numbers in various forms:

//// CODE: 1 > To print the following pattern of numbers as shown below:
/*
                        1 
                        1 2 
                        1 2 3 
                        1 2 3 4 
                        1 2 3 4 5

*/
/*
#include <stdio.h>
 
int main()
{
    int i, j;

    printf("\n");

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n");
 
    return 0;
} */

//.*In the above program if 'i' is printed instead of 'j' then the output would be as shown below:
/*
                        1 
                        2 2 
                        3 3 3 
                        4 4 4 4 
                        5 5 5 5 5

*/

//// CODE: 2 > To print the following pattern of numbers as shown below:
/*
                                1 
                              2 1 
                            3 2 1 
                          4 3 2 1 
                        5 4 3 2 1 
*/
/*
#include <stdio.h>
 
int main()
{
    int i, j, space;

    printf("\n");

    for(i = 1; i <= 5; i++)
    {
        for(space = 1; space <= (5 - i); space++)
            printf("  ");

        for(j = i; j >= 1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n");
  
    return 0;
} */

//* In the above program if 'i' is printed instead of 'j' then the output would be as shown below:
/*
                                1 
                              2 2 
                            3 3 3 
                          4 4 4 4 
                        5 5 5 5 5
*/

//// CODE: 3 > To print the following pattern of numbers as shown below:
/*
                        1 2 3 4 5 
                        2 3 4 5 
                        3 4 5 
                        4 5 
                        5 
*/
/*
# include <stdio.h>
 
int main()
{
    int i, j;

    printf("\n");

    for(i = 1; i <= 5; i++)
    {
        for(j = i; j <= 5; j++)
        {
            printf("%d ",j); 
        }
        printf("\n");
    }
    printf("\n");
 
    return 0;
} */

//* In the above program if 'i' is printed instead of 'j' then the output would be as shown below:
/*
                            1 1 1 1 1 
                            2 2 2 2 
                            3 3 3 
                            4 4 
                            5                       
*/

//// CODE: 4 > To print the following pattern of numbers as shown below:
/*
                        1 2 3 4 5 
                          1 2 3 4 
                            1 2 3 
                              1 2 
                                1
*/
/*
#include <stdio.h>
 
int main()
{
    int i, j, space;

    printf("\n");

    for(i = 5; i >= 1; i--)
    {
        for(space = 1; space <= (5 - i); space++)
            printf("  ");

        for(j = 1; j <= i; j++)
        {
            printf("%d ",j); 
        }
        printf("\n");
    }
    printf("\n");
 
    return 0;
} */

//* In the above program if 'i' is printed instead of 'j' then the output would be as shown below:
/*
                        5 5 5 5 5 
                          4 4 4 4 
                            3 3 3 
                              2 2 
                                1                                               
*/

//// CODE: 5 > To print the following pattern of numbers as shown below: ( Modification of CODE: 4)
/*
                        1 1 1 1 1 
                          2 2 2 2 
                            3 3 3 
                              4 4 
                                5
*/
/*
#include <stdio.h>
 
int main()
{
    int i, j, space, k = 1;

    printf("\n");

    for(i = 5; i >= 1; i--)
    {
        for(space = 1; space <= (5 - i); space++)
            printf("  ");

        for(j = 1; j <= i; j++)
        {
            printf("%d ",k); 
        }
        k++;
        printf("\n");
    }
    printf("\n");
 
    return 0;
} */

//// CODE: 6 > To print the following pattern of numbers as shown below: ( Modification of CODE: 3)
/*
                        5 5 5 5 5 
                        4 4 4 4 
                        3 3 3 
                        2 2 
                        1 
*/
/*
# include <stdio.h>
 
int main()
{
    int i, j;

    printf("\n");

    for(i = 5; i >= 1; i--)
    {
        for(j = i; j >= 1; j--)
        {
            printf("%d ",i); 
        }
        printf("\n");
    }
    printf("\n");
 
    return 0;
} */

//// CODE: 7 > To print the following pattern of numbers as shown below: (input should be given as 5)
/*
                                1 
                              2 3 2 
                            3 4 5 4 3 
                          4 5 6 7 6 5 4 
                        5 6 7 8 9 8 7 6 5
*/
/*
#include <stdio.h>

int main() 
{
    int i, space, rows, k = 0, count = 0, count1 = 0;
   
    printf("Enter the No.of rows: ");
    scanf("%d", &rows);

    printf("\n");

   for (i = 1; i <= rows; i++) 
   {
      for (space = 1; space <= (rows - i); space++) 
      {
         printf("  ");
         count++;
      }
      while (k != 2 * i - 1) 
      {
         if (count <= rows - 1) 
         {
            printf("%d ", i + k);
            count++;
         } 
         else 
         {
            count1++;
            printf("%d ", (i + k - 2 * count1));
         }
         k++;
      }
      count1 = count = k = 0;
      printf("\n");
   }
   printf("\n");

   return 0;
} */

//. CODE: 8 > To print the following pattern of numbers as shown below: (input should be given as 5)
/*
-                        5 6 7 8 9 8 7 6 5 
-                          4 5 6 7 6 5 4 
-                            3 4 5 4 3 
-                              2 3 2 
-                                1 
*/

//* In the above program i.e in CODE: 7 - if the outer for is modified little bit then we get the above pattern.
// -  for (i = rows; i >= 1; i--) < This is the little change i.e 'i' goes from 5 to 1.

//// CODE: 9 > To print the Pascal's Triangle.
/*
                                     1
                                   1   1
                                 1   2   1
                               1   3   3   1
                             1   4   6   4   1
                           1   5  10  10   5   1
*/
/*
#include <stdio.h>

int main() 
{
   int coef = 1, space, i, j;

   printf("\n");
      
   for (i = 0; i <= 5; i++) 
   {
      for (space = 1; space <= (5 - i); space++)
         printf("  ");
      
      for (j = 0; j <= i; j++) 
      {
         if (j == 0 || i == 0)
            coef = 1;
         else
            coef = coef * (i - j + 1) / j;
         
         printf("%4d", coef);
      }
      printf("\n");
   }
   printf("\n");

   return 0;
} */ 

//// CODE: 10 > To print the Floyd's triangle:
/*
                            1 
                            2 3 
                            4 5 6 
                            7 8 9 10 
                            11 12 13 14 15 
*/
/*
#include <stdio.h>

int main() 
{
    int i, j, k = 1;
   
    printf("\n");

    for (i = 1; i <= 5; i++) 
    {
       for (j = 1; j <= i; j++) 
        {
            printf("%d ", k);
            k++;
        }
      printf("\n");
   }
   printf("\n");

   return 0;
} */


//. CODE: From now onwards the printing of alphabets in place of numbers in various forms:

//// CODE: 1 > To print the pattern as shown below: (This program can be modified into various forms again as in numbers and asterisks programs).
/*
                        A 
                        B C 
                        D E F 
                        G H I J 
                        K L M N O
*/
/*
#include <stdio.h>
 
int main()
{
    int i, j, alphabet = 'A';

    printf("\n");

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c ", alphabet);
            alphabet++;
        }
        printf("\n");
    }    
    printf("\n");
 
    return 0;
} */

//// CODE: 2 > To print the pattern as shown below: (This program can be modified into various forms again).
/*
                            1 
                           A B 
                          2 3 4 
                         C D E F 
                        5 6 7 8 9
*/
/*
#include <stdio.h>
 
int main()
{
    int i, j, alphabet = 'A', k = 1, space;

    printf("\n");

    for(i = 1; i <= 5; i++)
    {
        for(space = 1; space <= (5 - i); space++)
            printf(" ");  // Here if one more space is given inside printf then the output will be little different.

        for(j = 1; j <= i; j++)
        {
            if((i%2) == 0)
            {
                printf("%c ", alphabet);
                alphabet++;
            }
            else
            {
                printf("%d ",k);
                k++;
            }
        }
        printf("\n");
    }    
    printf("\n");
 
    return 0;
} */

//. In the above program i.e CODE: 2 > If we increase the space by one in the printf of space for loop then the pattern would be:
/*
                            1 
                          A B 
                        2 3 4 
                      C D E F 
                    5 6 7 8 9
*/

//* The above program can be modified into many other different forms.

