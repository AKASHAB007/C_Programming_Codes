//// CODE: 1 - Program to count the number of males and females in the list.

#include <iostream>
 
using namespace std;

class student
{
    char name[30];
    char gender[5];

    public:
        void getdata(void);
        void display(void);
};

void student :: getdata(void)
{
    int i;
    
    for(i = 1; i <= 5; i++)
    {
        cout << "Enter the Name: ";
        cin >> name;

        cout << "Gender: " ;
        cin >> gender;
    }
}

void student :: display(void)
{
    int i;

    for(i = 1; i <= 5; i++)
    {
        cout << "Name: " << name << "\n";
        cout << "Gender : " << gender << "\n";
    }
}

int main()
{
    student x;
    x.getdata();    
    x.display();
 
    return 0;
}