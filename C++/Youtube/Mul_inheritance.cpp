// Multiple Inheritance:

#include <iostream>
using namespace std;

// Base class-1
class A
{
    public:
        void printMessage()
        {
            cout << "Class A print message function" << endl;
        }
};

// Base Class-2
class B 
{
    public:
        void printMessage()
        {
            cout << "Class B print message function" << endl;
        }
};

// Derived Class:
class AB : public A, public B
{
   /* public: // Ambiguous error if we try to printMessage() here.
        void printMessage()
        {
            cout << "Class AB print message function" << endl;
        } */

    public:
        void printMessage()
        {
            A::printMessage(); // Prints Base Class-A
            B::printMessage(); // Prints Base Class-B
            cout << "Class AB print message" << endl;
        }
};

int main()
{
    AB obj;
    obj.printMessage();
 
    return 0;
}