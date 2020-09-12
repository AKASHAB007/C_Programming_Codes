//// Interview question 7.7: Printing integers from 1 to 100 without using any loop construct. 
//. NOTE: Uncomment particular program , compile it and run it. 

//// Using Recursive main() function:
/*
#include <stdio.h>
 
int main()
{
    static int i = 1;

    if(i <= 100)
    {
        printf("%d ",i++);
        main();
    }
  
    return 0;
} */

//// Using Goto Statement:
/*
#include <stdio.h>
 
int main()
{
    int i = 0,begin;

    printf("\n");
    
    begin:

    i = i + 1;
    printf("%d ",i);

    if(i < 100)
    goto begin;

    printf("\n");
 
    return 0;
} */

//// Using Function created outside the main() function:
/*
#include <stdio.h>

void number(int n)
{
    if(n <= 100)
    {
        printf("%d ",n);
        number(n + 1);
    }
}
 
int main()
{
    int n = 1;

    printf("\n");

    number(n);

    printf("\n");

    return 0;
} */