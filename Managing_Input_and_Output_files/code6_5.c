//// CODE: P:167 > 6.5 - Given the marks in the three subjects, write a program to process the application to list the eligible candidates.
//*           Admission to professional course is subject to the following conditions:
/*            (a) Marks in Mathematics >= 60.
              (b) Marks in Physics >= 50.
              (c) Marks in Chemistry >= 40.
              (d) Total in all three subjects >= 200.
//                       or
              Total in Mathematics and Physics >= 150.
*/

#include <stdio.h>

int main()                     
{
    int m,p,c,sum,sum1,i;
    char SN[50];

    //* Here i am Inputing the Name and Marks of the subjects of Three students(You can enter many other students also). So My for loop runs 3 times.

    for(i=1;i<=3;i++)
    {
        printf("Student %d name : ",i);
        scanf("%s",SN);
        printf("\n");

        printf("Enter the Mathematics marks: ");
        scanf("%d",&m);

        printf("Enter the Physics marks: ");
        scanf("%d",&p);

        printf("Enter the Chemistry marks: ");
        scanf("%d",&c);
        printf("\n");

        sum = m+p+c;
        sum1 = m+p;

        printf("Total in all the three subjects: %d\n",sum);
        printf("Total in the Mathematics and Physics: %d\n",sum1);

        if(m>=60 && p>=50 && c>=40)
        printf("Student %s is eligible to take this professional course.\n",SN);

        else if(sum>=200 || sum1>=150)
        printf("Student %s is eligible to take this professional course.\n",SN);

        else
        {
            printf("Student %s is not eligible for this professional Course! Better luck next time.\n",SN);
        }
        printf("\n");
    }

    //// DOUBT |||||\\\\\\\\\\\\\\\\

   /* printf("Here's the List of eligible candidates:\n");
    
        if((m>=60 && p>=50 && c>=40) || (sum>=200 || sum1>=150))
        printf("%s\n",SN);    
    */

    return 0;
}