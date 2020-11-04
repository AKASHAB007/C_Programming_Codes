//// CODE: DATA STRUCTURES > Problem-3
/*      Implement and Demonstrate the following C functions using pass-by-reference method:
            (a) strcpy()
            (b) strcat()
            (c) strcmp()
            (d) strrev()
*/

//// Program-3 > (d) strrev (This is my Linux device i can't find strrev in string.h so i created my own strreverse)

#include <stdio.h> 
#include <string.h> 

char *strreverse(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;

      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
  
int main() 
{ 
   char str[50] = "DATA_STRUCTURES";
  
   printf("\nThe given string is > '%s'\n",str); 
  
   printf("After reversing string is > '%s'\n",strreverse(str)); 
  
   return 0; 
} 

/* Test Case Output:

The given string is > 'DATA_STRUCTURES'
After reversing string is > 'SERUTCURTS_ATAD'

*/