// CODE: DMS Assignment Problem-35

#include <stdio.h>

int main()
{
    int C;

    printf("\nGiven the Truth values of P and Q:\n\n");
    printf(" P | Q\n");
    printf("-------\n");
    printf(" T | T\n T | F\n F | T\n F | F\n");

    printf("\n INSTRUCTIONS: Enter a correct choice\n");
    printf("\t1. Conjuntion\n\t2. Disjunction\n\t3. Exclusive or\n\t4. Conditional Statement\n\t5. Biconditional Statement\n\t6. Exit\n");

    do
    {
        printf("\nEnter the choice: ");
        scanf("%d", &C); 
        switch(C)
        {
            case 1: printf("\nThe Conjunction of P and Q Propositions:\n");
                    printf(" P | Q | P ^ Q\n");
                    printf("---|---|-------\n");
                    printf(" T | T |   T\n T | F |   F\n F | T |   F\n F | F |   F\n");
                    break;

            case 2: printf("\nThe Disjunction of P and Q Propositions:\n");
                    printf(" P | Q | P V Q\n");
                    printf("---|---|-------\n");
                    printf(" T | T |   T\n T | F |   T\n F | T |   T\n F | F |   F\n");
                    break;

            case 3: printf("\nThe Exclusive OR of P and Q Propositions:\n");
                    printf(" P | Q | P (+) Q\n");
                    printf("---|---|-------\n");
                    printf(" T | T |    F\n T | F |    T\n F | T |    T\n F | F |    F\n");
                    break;

            case 4: printf("\nThe Conditional Statement of P and Q Propositions:\n");
                    printf(" P | Q | P --> Q\n");
                    printf("---|---|-------\n");
                    printf(" T | T |    T\n T | F |    F\n F | T |    T\n F | F |    T\n");
                    break;

            case 5: printf("\nThe Biconditonal Statement of P and Q Propositions:\n");
                    printf(" P | Q | P <--> Q\n");
                    printf("---|---|-------\n");
                    printf(" T | T |    T\n T | F |    F\n F | T |    F\n F | F |    T\n");
                    break;

            case 6: printf("\nYou Exited\n");
                    break;

            default: printf("\n---/** ENTER A CORRECT CHOICE **/---\n");
        }
    } while (C != 6);
    
    return 0;
}