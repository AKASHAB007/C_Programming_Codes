// CODE: DMSGT Assignment Program-38 question-28 (a) 

#include <stdio.h>
 
int main()
{
    printf("\033[01;031m");
    printf("\n(f)  p V q\n    ~p V r\n    ~r\n----------------\n  .^. q\n");
    printf("\033[0m");
 
    printf("\033[01;33m");
    printf("\n   STEP\t     |\t  REASON\n");
    printf("-------------|-------------\n");

    printf("1. ~p V r    |   Premise\n");    
    printf("2. ~r        |   Premise\n"); 
    printf("3. ~p        |   Disjunctive Syllogism from (1) and (2)\n"); 
    printf("4. p V q     |   Premise\n"); 
    printf("5. q         |   Disjunctive Syllogism from (4) and (3)\n");

    printf("\033[0m");

    printf("\033[01;34m");
    printf("\nTherefore the given argument is \"VALID\"\n\n");
    printf("\033[0m");

    return 0;
}