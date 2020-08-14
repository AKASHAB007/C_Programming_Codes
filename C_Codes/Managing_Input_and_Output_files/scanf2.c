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
                                                 ////  DOUBT DOUBT DOUBT \\\\
    printf("Enter 3 integers\n");
    scanf("%d%d%d",&a,&b,&c);

    printf("(a) %d\n",a);
    printf("    %d\n",b);
    printf("    %d\n",c);                        ////  DOUBT DOUBT DOUBT \\\\

    printf("(b) %d\n    %d\n    %d\n",a,b,c);
                                                                  
    printf("\n"); // Doubt clear this before checking others. \/ /-\|C /- /\ \/ /\ \/ /\ \/ /\ \/ /\ \/ /\ 

    return 0;
}
