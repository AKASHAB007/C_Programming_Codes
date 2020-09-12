//// CODE: P:170 > 6.20 - To input a string and to Count the No.of Upper, lower and also special characters in that string.

#include <stdio.h>
 
int main()
{
    char str[100];
    int countL,countU,countS;
    int counter;
 
    //assign all counters to zero
    countL=countU=countS=0;
 
    printf("Enter a string: ");
    scanf("%[^\n]",&str);
 
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
}

/* Output:
Enter a string: C Programming is not so Tough if you Understand the Basics Clearly ...,,,,!!!!!

Total Upper case characters: 6
Lower Case characters: 49
Special Characters: 12

*/