// CODE: P:128 > 5.1 - To read the string > WORDPROCESSING < from the terminal and output in the following manner.
/* (i) WORD PROCESSING
   (ii)  WORD
         PROCESSING 
   (iii) W.P.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char word[20];

    printf("Enter the Word\n");
    scanf("%s",&word);

    printf("(i) %.4s %c%c%c%c%c%c%c%c%c%c\n",word,word[4],word[5],word[6],word[7],word[8],word[9],word[10],word[11],word[12],word[13]);
    
    printf("(ii) %.4s\n     %c%c%c%c%c%c%c%c%c%c\n",word,word[4],word[5],word[6],word[7],word[8],word[9],word[10],word[11],word[12],word[13]);

    printf("(iii) %c.%c.\n",word[0],word[4]);

    return 0;
}