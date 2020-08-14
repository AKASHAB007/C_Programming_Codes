#include <stdio.h>
#include <string.h>

int main()
{
    char ch,month[50];
    char January,january,Febraury,febraury,March;

    printf("\nEnter the Month name: ");


   // January = 'a'; 
    //Febraury = 'b';
    //month = March = 'c'; 

    if(month == 'a')
    ch = 'a';

    else if(month == 'b')
    ch = 'b';

    else if(month == 'c')
    ch = 'c';   

    else if(month == 'd')
    ch = 'd';   



    switch(ch)
    {
        case 'a': 
            printf("\nJanuary has 31 Days\n");
            break;

        case 'b':
            printf("\nFebraury has 29 days but on leap year it's 28 days\n");
            break;

        case 'c': 
            printf("\nMarch\n");
            break;

        case 'd':
            printf("\nApril\n");
            break;




    }
     return 0;
}