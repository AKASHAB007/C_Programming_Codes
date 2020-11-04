//// CODE: P:23 > 2.3 - Program to illustrate the use of class in C++ program.

//. NOTE: Classes are the user-defined data types like structures in C. 

#include <iostream>
 
using namespace std;

class person
{
    char name[30];
    int age;

    public: 
        void getdata(void);
        void display(void);
};

void person :: getdata(void)
{
    cout << "Enter the name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;
}

void person :: display(void)
{
    cout << "\nName : " << name << "\n" ;
    cout << "Age : " << age << "\n";
}

int main()
{
    person p;
    p.getdata();
    p.display(); 
 
    return 0;
}

/* Test Case Output:

Enter the name: Edith
Enter age: 25

Name : Edith
Age : 25

*/