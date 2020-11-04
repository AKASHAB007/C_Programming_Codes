//// CODE: P:28 > 2.6 - Redo program 2.5 using a class called temp and member functions.

#include <iostream>
 
using namespace std;

class temp
{
    float F, C;

    public: 
        void getdata(void);
        void display(void);
};

void temp :: getdata(void)
{
    cout << "Enter the Temperature in Fahrenheit(degree): ";
    cin >> F;
}

void temp :: display(void)
{
    C = (5.0/9.0)*(F - 32.0);

    cout << "Temparature in Celsius(degree) = " << C << "\n";
}

int main()
{
    temp p;
    p.getdata();
    p.display();
  
    return 0;
}

/* Test Case Output: 

Enter the Temperature in Fahrenheit(degree): 98.6
Temparature in Celsius(degree) = 37

*/