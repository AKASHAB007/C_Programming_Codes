//// CODE: P:184 > 7.6 - A Class of 'n' students take an annual examination in 'm' subjects. A program to read the marks obtained
////                     by each student in various subjects and to compute and print the total marks obtained by each of them.

#include <stdio.h>
 
#define FIRST 360
#define SECOND 240 

int main()
{
   int n, m, i, j, roll_number, marks, total;

   printf("Enter the number of students and subjects: ");
   scanf("%d%d",&n, &m);
   printf("\n");

   for(i = 1; i <= n; i++)
   {
       printf("Enter the roll_number : ");
       scanf("%d",&roll_number);

        total=0;
        printf("\nEnter marks of %d subjects for ROLL NO %d\n", m, roll_number);

        for(j = 1; j <= m; j++)
        {
            scanf("%d", &marks);
            total = total + marks;
        }
        printf("TOTAL MARKS = %d",total);
        if(total >= FIRST)
        {
            printf(" (FIRST DIVISION)\n\n");
        }
        else if(total >= SECOND)
        {
            printf(" (SECOND DIVISION)\n\n");
        }
        else
        {
            printf(" (---- FAIL----)\n\n");
        }
    }
    return 0;
}


/*SAMPLE OUTPUT:(3 students and 6 subjects)

Enter the number of students and subjects: 3 6

Enter the roll_number : 8701

Enter marks of 6 subjects for ROLL NO 8701
81 75 83 45 61 59
TOTAL MARKS = 404 (FIRST DIVISION)

Enter the roll_number : 8702

Enter marks of 6 subjects for ROLL NO 8702
51 49 55 47 65 41
TOTAL MARKS = 308 (SECOND DIVISION)

Enter the roll_number : 8705

Enter marks of 6 subjects for ROLL NO 8705
40 19 31 47 39 25
TOTAL MARKS = 201 (---- FAIL----)

*/


