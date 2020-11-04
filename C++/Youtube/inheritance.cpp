//// Inheritance in OOP of C++

#include <iostream>
using namespace std;

// Base Class
class Shape
{
    protected: 
        int width;
        int height;

    public: 
        void setwidth(int w)
        {
            width = w;
        }
        void setheight(int h)
        {
            height = h;
        }
};

// Derived Class
class Rectangle: public Shape
{
    public: 
        int getArea()
        {
            return (width * height);
        }
};

int main()
{
    Rectangle Rect;

    Rect.setwidth(5);
    Rect.setheight(7);

    //Print the area of the object
    cout << "Total area: " << Rect.getArea() << endl;

    return 0;
}