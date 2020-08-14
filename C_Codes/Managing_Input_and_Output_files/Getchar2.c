//// CODE: To make User to input "YES" or "NO" using getchar() function and print respective statements.

//* getchar() - Application 2.

#include <stdio.h>

int main()
{
    char answer;

    printf("Hey! Are you a Marvel fan\n\n");
    printf("Enter Y/y for Yes or N/n for No\n");
    
    Comehere:

    answer=getchar();
    
    if (answer=='Y' || answer=='y')
        printf("Yahoooo! They say it aloud ---- Avengers Assemble.\n");

    else if(answer=='N' || answer =='n')
    printf("Ohhh! Sad to here that. Please watch those Awesome movies!\n");

    else
    {
        printf("Enter a Valid Key: \n");
        goto Comehere;
    }
    return 0;
}