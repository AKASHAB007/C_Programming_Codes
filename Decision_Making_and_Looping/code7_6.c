//// CODE: P:208 > 7.6 - To read the age of 15 persons amd count the no.of persons in the age-group 50-60. Use 'for' and 'continue' statements.

#include <stdio.h>
 
int main()
{
    int i,age,count=0;

    printf("\nEnter the Age of 15 persons one by one:\n");
    
    for(i = 1; i <= 15; i++)
    {
        scanf("%d", &age);

        if(age >= 50 && age <= 60)
        {
            count++;
            continue;// The continue Statement is not neccessary here. The program still works fine when it's removed.
        }
    }

    printf("\nThe no.of persons in the age-group 50-60 are: %d\n\n",count);
 
   return 0;
}

/* TEST CASE:

Enter the Age of 15 persons one by one:
21
24
25
56
57
85
59
56
61
30
60
50
45
49
56

The no.of persons in the age-group 50-60 are: 7


// ANOTHER TEST CASE:

Enter the Age of 15 persons one by one:
13
18
21
29
30
45
50 
57
60
85
91
99
56
22
67

The no.of persons in the age-group 50-60 are: 4

*/