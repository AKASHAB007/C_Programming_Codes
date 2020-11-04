//// CODE: Lecture-14 > "this" pointer Example Code:

/*
#include <iostream>
 
using namespace std;

class stud
{
    int a1;
    public:
        void set(int a)
        {
            this -> a1 = a;
        }

        void show()
        {
            cout << a1 << "\n";
        }
};

int main()
{
    stud S1;
    
    S1.set(5);

    S1.show();

    return 0;
}

/* Test Case Output:

5

*/

#include <iostream>
 
using namespace std;

class person
{
    char name[30];
    int age;

    public: 
        void getdata()
        {
            cin >> name >> age;
        }

        void display()
        {
            cout << "Name : " << name << "\n" << "Age  : " << age << "\n";
        }
    
    person compare(person);
};

person person :: compare(person p)
{
    if(age > p.age)
        return *this;
    
    else
        return p;
}

int main()
{
    person p1, p2, eld;

    cout << "Enter name and age of the person1 : \n";
    p1.getdata();
 
    cout << "Enter name and age of the person2 : \n";
    p2.getdata();

    eld = p1.compare(p2);

    cout << "Elder's person \n";

    eld.display();
 
    return 0;
}

/* Test Case Output:

Enter name and age of the person1 : 
Akash    
20
Enter name and age of the person2 : 
Abhishek
25
Elder's person 
Name : Abhishek
Age  : 25

*/