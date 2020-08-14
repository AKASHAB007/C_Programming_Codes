//// CODE: P:167 > 6.4 - Given a list of marks ranging from 0 to 100, Write a program to compute and print the number of students:
/*                      (a) who have obtained more than 80 marks.
                        (b) who have obtained more than 60 marks.
                        (c) who have obtained more than 40 marks.
                        (d) who have obtained 40 or less marks.
                        (e) in the range 81 to 100.
                        (f) in the range 61 to 80.
                        (g) in the range 41 to 60.
                        (h) in the range 0 to 40.
*/

#include <stdio.h>

int main()
{
    char SN;
    int SM,count=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,i,start;
    
    for(i=1;i<=5;i++)
    {
        start:

        printf("Enter Roll.no:%d Student marks: ", i);
        scanf("%d",&SM);                                      //* SM - Student Marks.
    
        if(SM>80 && SM<=100)
        count= count+1;

        else if(SM>60 && SM<=100)
        count1=count1+1;

        else if(SM>40 && SM<=100)
        count2=count2+1;

        else if(SM>=0 && SM<40)
        count3=count3+1;

        if(SM>=81 && SM<=100)
        count4=count4+1;

        else if(SM>=61 && SM<=80)
        count5=count5+1;

        else if(SM>=41 && SM<=60)
        count6=count6+1;

        else if(SM>=0 && SM<=40)
        count7=count7+1;

        else
        {
            if(SM<0 || SM>100)
            {
            printf("Invalid Input !!! Enter the Valid marks\n");
            }
            goto start;
        } 
    }
    printf("\n");
    printf("No.of students who have obtained above 80 marks are: %d\n",count);

    printf("No.of students who have obtained above 60 marks are: %d\n",count1);

    printf("No.of students who have obtained above 40 marks are: %d\n",count2);

    printf("No.of students who have obtained 40 or less marks are: %d\n",count3);

    printf("No.of students in the range of 81 to 100 are: %d\n",count4);

    printf("No.of students in the range of 61 to 80 are: %d\n",count5);

    printf("No.of students in the range of 41 to 60 are: %d\n",count6);

    printf("No.of students in the range of 0 to 40 are: %d\n",count7);
    return 0;
}