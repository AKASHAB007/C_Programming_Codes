//// CODE: 1 - To Count the No.of Vowels, consonants, digits, white space characters, and other characters in a line of text.
//. NOTE: Onlu Using Pointer Concepts.

#include <stdio.h>
 
int main()
{
    int i, vow = 0, cons = 0;
    char  *p, *p1, *p2;

    char a[50];

    printf("\nEnter the Text: ");
    scanf("%s", a[i]);

    p = a;

    while( *p != '\0')
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U' ||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
        {
            vow++;
        }

        else 
        cons++;

        p2++;
    }

    printf("\n Vowels = %d\n", vow);

    printf("\n Consonants = %d\n", cons);

    return 0;
}