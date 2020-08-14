//// CODE: This program is about different uses of scanf() function.

    //*In this one program i have written 3 programs where i have used scanf() function in three ways.

        //. To see the output of one program you need to comment other two programs and run it to see the output of a particular program.

/* To know what this program is about:- Try out these below steps:
1. I suggest you to give the input as > New Delhi 580001          < for the first program and see the output.
2. Next comment the first program and uncomment the second program and give the same input. Notice the output of this program.
3. At last comment the first two programs and then uncomment the third program and give the same input again. Notice the output of this program.
*/

//// 1. This program uses basic use of scanf().

#include <stdio.h>

int main()
{
    char address[80];

    printf("Enter the address\n");
    scanf("%s", address);

    printf("%s",address);
    return 0;
}


//// 2. This program is one of the special use of scanf() function where %[characters] is used as specifier.

/*
int main()
{
    char address[80];

    printf("Enter the address\n");
    scanf("%[ ,a-z, A-Z]", address);

    printf("%s",address);
    return 0;
}
*/

//// 3. This program is also one of the special use of scanf() function where %[^characters] is used as specifier.

/*
int main()
{
    char address[80];

    printf("Enter the address\n");
    scanf("%[^\n]", address);

    printf("%s",address);
    return 0;
}
*/