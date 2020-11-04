// CODE: DMSGT Assignment Program-38 (Question-21)

#include <stdio.h>
 
int main()
{
    printf("\033[01;33m");
    printf("\n\"If it does not rain or if it is not foggy,then the sailing race will be held and the lifesaving demonstration will go on,\"");
    printf("\n\"If the sailing race is held, then the trophy will be awarded,\"and \"The trophy was not awarded\"\nTherefore \"It rained\"\n");
    printf("\033[0m");
 
    printf("\033[01;31m");
    printf("\nLet p: It rains\n    q: It is foggy\n    r: Sailing race will be held\n    s: Life-saving demonstration will go on\n    t: The Trophy will be awarded\n");
    printf("\033[0m");

    printf("\033[01;32m");
     printf("\nAssume that the following statements are true:");
    printf("\nGiven: (~p V ~q) --> (r V s)\n\tr --> t\n\t~t\n\t----------------\n\t.^. p\n");
    printf("\033[0m");

    printf("\033[01;34m");
    printf("\n\tSTEP\t             |\t\tREASON\n");
    printf("-----------------------------|--------------------------\n");

    printf("1. r --> t                   |   Premise\n");    
    printf("2. ~t                        |   Premise\n"); 
    printf("3. ~r                        |   Modus Ponens using (1) and (2)\n"); 
    printf("4. ~r V ~s                   |   \n"); 
    printf("5. ~(r ^ s)                  |   De-morgan's Law on (4)\n"); 
    printf("6. ~(~p V ~q) --> (r ^ s)    |   Premise\n");
    printf("7. ~(~p V ~q)                |   Modus Ponens using (5) and (6)\n");  
    printf("8. p ^ q                     |   De-morgan's Law and Double negation Law\n");
    printf("9. p                         |   Simplification of (8)\n");

    printf("\033[0m");

    printf("\033[01;35m");
    printf("\nTherefore the given statement is \"VALID\"\n");
    printf("\033[0m");

    return 0;
}