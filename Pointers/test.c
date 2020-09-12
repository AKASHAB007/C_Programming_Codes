/*
#include <stdio.h>
 
int main()
{
    char *ptr;

    printf("\n%ld %ld\n\n", sizeof(*ptr), sizeof(ptr));
  
    return 0;
} */

/* TEST CASE OUTPUT:

1 8

*/

/*
#include <stdio.h>
 
int main()
{
    int x = 10, y = 10;

    int *p1 = &x, *p2 = &y;

    //printf("\n%d\n", (*p1)++);  // Output = 10;

    //printf("\n%d\n", --(*p2));  // Output = 9;

    //printf("\n%d\n", (*p1+(*p2)--)); // Output = 20;
    
    printf("\n%d\n", (++(*p2)-*p1));  // Output = 1;

    return 0;
} */

/*
#include <stdio.h>
 
int main()
{
    int m = 100;

    int *p1 = &m;

    int **p2 = &p1;

    printf("\nOutput = %d\n\n", **p2); // Output = 100
  
    return 0;
} */

/*
#include <stdio.h>
 
int main()
{
    int m[2];

    *(m+1) = 100;
    *m = *(m+1);

    printf("\nOutput = %d\n\n", m[0]); // Output = 100 ;
 
    return 0;
} */

/*
#include <stdio.h>
 
int main()
{
    int m[2];
    int *p = m;

    m[0] = 100;
    m[1] = 200;
 
    printf("\nOutput = %d %d\n\n", ++*p, *p); // Output = 101 100 ; 

    return 0;
} */
/*
#include <stdio.h>

int f(char *p);
 
int main()
{
    char str[] = "ANSI";
    
    printf("\nOutput = %d\n\n", f(str)); // Output = 4
  
    return 0;
}

int f(char *p)
{
    char *q = p;
    while(*++p)
        ;

    return (p - q);
} */

#include <stdio.h>
 
int main()
{
    int a[10];

    scanf("%d", &a[1]);

    printf("\n%d\n", a[0]);
 
 
    return 0;
}