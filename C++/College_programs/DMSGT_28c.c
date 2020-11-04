// CODE: DMSGT Assignment Program-38 question-28 (c) 

#include <stdio.h>
 
int main()
{
    printf("\033[01;031m");
    printf("\n(c) p --> (q --> r)\n    ~q --> ~p\n    p\n----------------\n  .^. r\n");
    printf("\033[0m");
 
    printf("\033[01;33m");
    printf("\n      STEP\t     |\t\tREASON\n");
    printf("---------------------|-------------------------\n");

    printf("1. p --> (q --> r)   |   Premise\n");    
    printf("2. p                 |   Premise\n"); 
    printf("3. (q --> r)         |   Modus Ponens from (1) and (2)\n"); 
    printf("4. ~q --> ~p         |   Premise\n"); 
    printf("5. ~r --> ~q         |   Contrapositive of (3)\n");
    printf("6. ~r --> ~p         |   Hypothetical Syllogism of (5) and (4)\n");
    printf("7. p --> r           |   Contrapositive of (6)\n");
    printf("8. r                 |   Modus Ponens from (7) and (2)\n");

    printf("\033[0m");

    printf("\033[01;34m");
    printf("\nTherefore the given argument is \"VALID\"\n\n");
    printf("\033[0m");

    return 0;
}