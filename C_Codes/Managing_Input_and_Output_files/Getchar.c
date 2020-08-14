//// CODE: To Check whether the entered character is an Alphabet or a digit or any other special Character Using getchar() function.

//* getchar() - Application 1.

#include <stdio.h>
#include <ctype.h>


int main()
{
    printf("Enter the Character\n");
    char character;
    character=getchar();

    if(isalpha(character) > 0)
    {
    printf("Its a Alphabet\n");
    }
    else if(isalnum(character) > 0)
        {
        printf("Its a Digit\n");
        }  
    else
    {
        printf("Its a Special character\n");
    }
    return 0;

}
