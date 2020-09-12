//// CODE: P:187 > 2 - To read a positive integer and to determine and print its Binary equivalent. 

#include <stdio.h>
 
int main()
{
    int binarynum[100],i=0,n,j;

    printf("\nEnter the number whose Binary equivalent should be found: ");
    scanf("%d",&n);

    while(n > 0)
    {
        binarynum[i] = n % 2;
        n = n/2;
        i++;
    }

    //// I have included this printf to add a Zero at the beginning. Because some numbers require to show a pre-zero for clear looking binary equivalent. For ex: 100
    printf("%d",n); 

    for(j = i-1; j >= 0; j--)
    {
        printf("%d",binarynum[j]);
    }
    printf("\n");
   
   return 0;
}


/* SAMPLE OUTPUT: ( 3 Sample outputs)

Enter the number whose Binary equivalent should be found: 7
0111

Enter the number whose Binary equivalent should be found: 100
01100100

Enter the number whose Binary equivalent should be found: 83
01010011

*/