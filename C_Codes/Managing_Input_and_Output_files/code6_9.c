//// CODE: P:168 > 6.9 - Program to read the value of X and evaluate the following function:
/*                                
                                    | 1 for x > 0
                                y = | 0 for x = 0
                                    | -1 for x < 0
. USING : 
 *  (a) if statements.
 *  (b) else if statements, and
 *  (c) conditional operator ?:
*/

#include <stdio.h>

//// USING: (a) if statements.

int main()
{
    int x,y;

    printf("Enter the value of X : ");
    scanf("%d",&x);

    if(x>0)
    {
         y = 1;
         printf("y = %d\n",y);
    }

    if(x==0)
    {
         y = 0;
         printf("y = %d\n",y);
    }

    if(x<0)
    {
         y = -1;
         printf("y = %d\n",y);
    }
    return 0;
}

//// USING: (b) else if statements.
/*
int main()
{
    int x,y;

    printf("Enter the value of X : ");
    scanf("%d",&x);

    if(x>0)
    {
        y = 1;
        printf("y = %d\n",y);
    }

    else if(x==0)
    {
        y = 0;
        printf("y = %d\n",y);
    }

    else
    {
        y = -1;
        printf("y = %d\n",y);
    }
    return 0;
}
*/

//// USING: (c) Conditinal operator (?:)
/*
int main()
{
    int x,y;

    printf("Enter the value of X : ");
    scanf("%d",&x);

    (x>0) ? y = 1 : ( (x==0) ? y = 0 : (y=-1));

    printf("y = %d\n",y);
    return 0;
}
*/
