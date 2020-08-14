#include <stdio.h>
 
int main()
{
    char str[100];
    int countL,countU,countS;
    int counter;
 
    //assign all counters to zero
    countL=countU=countS=0;
 
    printf("Enter a string: ");
    gets(str);
 
    for(counter = 0;str[counter]!=NULL;counter++)
    {
        if(str[counter]>='A' && str[counter]<='Z')
            countU++;
        else if(str[counter]>='a' && str[counter]<='z')
            countL++;
        else if(str[counter] =='.' || str[counter] =='!' || str[counter] ==',')
            countS++;    
           
    }
 
    printf("\nTotal Upper case characters: %d\nLower Case characters: %d\nSpecial Characters: %d\n",countU,countL,countS);
 
    return 0;
}