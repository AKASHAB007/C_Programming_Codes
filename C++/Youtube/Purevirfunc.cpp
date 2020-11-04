// CPP Program to illustrate concept of Pure Virtual function.

#include <iostream>
using namespace std;

class Shape
{
    public:
        virtual void getArea()=0; // Pure virtual function.
};

class Circle : public Shape
{
    public:
        void getArea() 
        {
            cout << "Enter Circle radius: " << endl;
            int r;
            cin >> r;
            cout << "Area of the Circle is: " << (3.14*r*r) << endl;
        }
};

class Rectangle : public Shape
{
    public:
        void getArea()
        {
            cout << "Enter lenght and breadth of the Rectangle: " << endl;
            int l,b;
            cin >> l >> b;
            cout << "Area of the Circle is: " << (l*b) << endl;
        }
};


int main()
{
    Circle c1;
    c1.getArea();

    Rectangle r1;
    r1.getArea();

    return 0;
}