// CODE: DMSGT Assignment Program-38 question-28 (a) 

#include <stdio.h>
 
int main()
{
    printf("\033[01;031m");
    printf("\n(a) p --> q\n    ~q\n    ~r\n----------------\n  .^. ~(p V r)\n");
    printf("\033[0m");
 
    printf("\033[01;33m");
    printf("\n   STEP\t     |\t  REASON\n");
    printf("-------------|-------------\n");

    printf("1. p --> q   |   Premise\n");    
    printf("2. ~q --> ~p |   Contrapositive of (1)\n"); 
    printf("3. ~q        |   Premise\n"); 
    printf("4. ~p        |   Modus Ponens from (2) and (3)\n"); 
    printf("5. ~r        |   Premise\n");
    printf("6. ~p ^ ~r   |   Conjunction from (4) and (5)\n");
    printf("7. ~(p ^ r)  |   De-Morgran's Law\n");

    printf("\033[0m");

    printf("\033[01;34m");
    printf("\nTherefore the given argument is \"VALID\"\n\n");
    printf("\033[0m");

    return 0;
}