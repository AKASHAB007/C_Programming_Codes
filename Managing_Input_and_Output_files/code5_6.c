//// CODE: P:129 > 5.6 - Read 3 intergers using one scanf and output them on one line using:-
/*                    (a) three printf statements.
                      (b) Only one printf with conversion specifiers.
                      (c) Only one printf without conversion specifiers.                
*/

#include <stdio.h>
#include <stdlib.h>

int main()                              
{
    int a,b,c;
                                                
    printf("Enter 3 integers\n");
    scanf("%d%d%d",&a,&b,&c);

    printf("Using three printf statements\n");
    printf("(a) %d\t",a);
    printf("    %d\t",b);
    printf("    %d\n",c);    

    printf("(b) %d      %d      %d\n",a,b,c);

    ////  DOUBT DOUBT DOUBT \\\\                         
    printf("\n");

    return 0;
}
