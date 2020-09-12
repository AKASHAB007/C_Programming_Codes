#include <stdio.h>

int main()
{
    char ch='a';
    switch (ch)
    {
        case 'a':
        printf("A\n");

        case 'b':
        printf("B\n");

        default: 
        printf("C\n");
    }
    return 0;
}

/*

//// Program to print ASCII using Switch.

int main()
{
    char ch='a';
    switch (ch)
    {
        case 'a':
        printf("%d\n",ch);

        case 'b':
        printf("%d\n",++ch);

        default: 
        printf("%d\n",++ch);
    }
    return 0;
}

*/
