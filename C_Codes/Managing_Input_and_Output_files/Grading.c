//// CODE: To find the average marks of a student and grading it according to user input.( Here i have considered 5 input(marks) from user).

//* Min marks is '0' and Max marks is '100' i have considered. 

#include <stdio.h>

int main()
{
    char studentname[50];
    unsigned int m1,m2,m3,m4,m5;
    float Average;

    printf("Enter the Student's Name: ");
    scanf("%s",&studentname);       // Use Underscore instead of Space for Full names with Initials and surnames. Ex: John_Wick, James_Bond, etc.

    printf("1 st test marks of student: ");
    scanf("%d",&m1);

    printf("2 nd test marks of student: ");
    scanf("%d",&m2);

    printf("3 rd test marks of student: ");
    scanf("%d",&m3);

    printf("4 th test marks of student: ");
    scanf("%d",&m4);

    printf("5 th test marks of student: ");
    scanf("%d",&m5);

    Average = (m1+m2+m3+m4+m5)/5;

    printf("%s: %.2f\n",studentname, Average);

    if(Average>0 && Average<=20)
    printf("Grade is 'F'- Fail\n");

    else if(Average>20 && Average<=40)
    printf("Grade is 'D'- Do Better next time\n");

    else if(Average>40 && Average<=60)
    printf("Grade is 'C'- Not so good\n");

    else if(Average>60 && Average<=80)
    printf("Grade is 'B'- Very good\n");

    else if(Average>80 && Average<=100)
    printf("Grade is 'A'- Excellent\n"); // This Grade is obviously for above 80 and below 100.

    else
    if(Average>100)
    printf("Not possible !!! re-check the marks and re-enter them\n");

    return 0;
}