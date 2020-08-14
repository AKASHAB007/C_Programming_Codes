//// CODE: P:170 > 6.18 - To input the total percentage of marks of a student and display its Division using below rules:
/*                       (a) Greater than or equal to 80 percent - "FIRST DIVISION".
                         (b) Greater than or equal to 60 percent and less than 80 percent - "SECOND DIVISION".
                         (c) Less than 60 percent - "THIRD DIVISION".
*/

#include <stdio.h>

int main()
{
    int  p;

    printf("\nEnter the Total percentage of marks the student has Scored: ");
    scanf("%d",&p);

    if((p>=80) && (p<=100))
    printf("\nStudent has earned 'FIRST DIVISION' by scoring Total of %d percent marks\n",p);

    else if((p>=60) && (p<80))
    printf("\nStudent has earned 'SECOND DIVISION' by scoring Total of %d percent marks\n",p);

    else if((p>0) && (p<60))
    printf("\nStudent has earned 'THIRD DIVISION' by scoring Total of %d percent marks\n",p);

    else
    {
        printf("\nRecheck and enter the correct percentage of marks of the students\n");  
    }
    return 0;
}