// CODE: DMSGT Assignment Program-38 (Question-20)

#include <stdio.h>
 
int main()
{
    printf("\033[01;33m");
    printf("\n\"Randy Works Hard\",\"If Randy works hard,then he is a dull boy,\"and \"If Randy is a dull boy,then he will not get a job\"\n Therefore \"Randy will not get the job\n");
    printf("\033[0m");
 
    printf("\033[01;31m");
    printf("\nLet p: Randy works hard\n    q: He is a dull boy\n    r: He will get the job\n");
    printf("\033[0m");

    printf("\033[01;32m");
    printf("\nAssume that the following statements are true:");
    printf("\nGiven:  p\n\tp --> q\n\tq --> ~r\n\t--------\n\t.^. ~r\n");
    printf("\033[0m");

    printf("\033[01;34m");
    printf("\n   STEP\t    |\tREASON\n");
    printf("------------|-------------\n");

    printf("1. p --> q  |   Premise\n");    
    printf("2. q --> ~r |   Premise\n"); 
    printf("3. p --> ~r |   Hypothetical Syllogism from (1) and (2)\n"); 
    printf("4. p        |   Premise\n"); 
    printf("5. ~r       |   Modus Ponens from (3) and (4)\n"); 
    printf("\033[0m");

    printf("\033[01;35m");
    printf("\nTherefore the given statement is \"VALID\"\n");
    printf("\033[0m");

    return 0;
}