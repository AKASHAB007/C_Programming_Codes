#include <stdio.h>
/*
int main()
{
    char str[100];
    int countL,countU,countS;
    int counter;
 
    //assign all counters to zero
    countL=countU=countS=0;
 
    printf("Enter a string: ");
    scanf("%[^\n]",&str);
 *
    for(counter = 0;str[counter]!=NULL;counter++)
    {
        if(str[counter]>='A' && str[counter]<='Z')
            countU++;

        else if(str[counter]>='a' && str[counter]<='z')
            countL++;

        else if(str[counter] =='.' || str[counter] =='!' || str[counter] ==',') //// You can include other special characters also in this line. I have mentioned only 3 of them.
            countS++;    
           
    }
 
    printf("\nTotal Upper case characters: %d\nLower Case characters: %d\nSpecial Characters: %d\n",countU,countL,countS);
 
    return 0;
}*/

//// In this below program if break is used output is 20. If instead of break if continue is used then just blank output screen.

int main()
{
    int m=0;
    do
    {
        if(m > 10)
            break;
    
     m=m+10;
    } while (m < 50);

    printf("%d\n",m);

    return 0;
}