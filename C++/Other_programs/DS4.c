//// CODE: DATA STRUCTURES > Program-4
/*  Define an Employee structure with members Emp-name, Emp-id, Dept-name and salary. Read and display data of N employees.
    Employees may belong to different departments. Write a function to:
    > Find Total salary of employees of a specified department. Use the concept of pointer to structure and allocate the memory
      dynamically to Employee instances.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
    char Emp_name[30];
    char Emp_id[30];
    char Dept_name[30];
    float Salary;
};

int main()
{
    int i, j = 1, k = 1, n, sum = 0;

    struct Employee *eptr;

    printf("Enter the 'N' Value: "); // 'N' Value is for how many Employees Data we want to print.
    scanf("%d", &n);
    printf("\n");
    
    eptr = (struct Employee*) malloc(n * sizeof(struct Employee));

    printf("Enter the Details of the Employees: \n");

    for(i = 0; i <= n-1; i++)
    {
        printf("\nEnter Details of Employee - %d : Name, Id, Dept-name, Salary respectively\n", j++);
        scanf("%s %s %s %f", (eptr+i)->Emp_name, (eptr+i)->Emp_id, (eptr+i)->Dept_name, &(eptr+i)->Salary);
    }
 
    for(i = 0; i <= n-1; i++)
    {
        printf("\nDetails of Employee - %d are :\n", k++);
        
        printf("Name - %s\nId - %s\nDept-name - %s\nSalary = %0.2f\n", (eptr+i)->Emp_name, (eptr+i)->Emp_id, (eptr+i)->Dept_name, (eptr+i)->Salary); 
    }
    printf("\n");

    return 0;
}

/* Test Case Output:

Enter the 'N' Value: 3

Enter the Details of the Employees: 

Enter Details of Employee - 1 : Name, Id, Dept-name, Salary respectively
Rocky
1001
Computer-science
25000

Enter Details of Employee - 2 : Name, Id, Dept-name, Salary respectively
Garudha
1002
Big-Data
36000

Enter Details of Employee - 3 : Name, Id, Dept-name, Salary respectively
Kattappa
1003
Data-Analysis
30000

Details of Employee - 1 are :
Name - Rocky
Id - 1001
Dept-name - Computer-science
Salary = 25000.00

Details of Employee - 2 are :
Name - Garudha
Id - 1002
Dept-name - Big-Data
Salary = 36000.00

Details of Employee - 3 are :
Name - Kattappa
Id - 1003
Dept-name - Data-Analysis
Salary = 30000.00

*/