// CODE: DMSGT Assignment Program-38 question-22

#include <stdio.h>
 
int main()
{
    printf("\033[01;31m");
    printf("\n\"All men are mortal. Socrates is a man. Therefore Socrates is mortal\"\n");
    printf("\033[0m");

    printf("\033[01;33m");
    printf("\nLet p(x): x is man\n    q(x): x is mortal\n");
    printf("\033[0m");

    printf("\033[01;32m");
    printf("\nAssume that the following statements are true:");
    printf("\nGiven:  Fa [p(x) --> q(x)]\n\tTe p(x)\n\t------------\n\t.^. Te q(x)\n"); // Fa - For all , Te = Their Exist
    printf("\033[0m");

    printf("\033[01;34m");
    printf("\nThis is a \"VALID\" Statement by Modus Ponens\n  Let x = a,\n  p(a)-->q(a) is True and p(a) is True\n --------------\n .^. q(a) must be True\n\n");
    printf("\033[0m");

    return 0;
}