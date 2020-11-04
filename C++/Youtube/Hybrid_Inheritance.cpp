// Hybrid Inheritance in C++ with Diamond Problem and its Resolution.

#include <iostream>
using namespace std;

class base
{
    protected:
        int val;
};

class derived1 : virtual public base
{
    public:
        derived1()
        {
            val = 1;
        }
        void getValue()
        {
            cout<<"Derived 1 value of datamember is: " <<val;
        }
};

class derived2 : virtual public base
{
    public:
        derived2()
        {
            val = 2;
        }
        void getValue()
        {
            cout<<"Derived 2 value of datamember is: " <<val;
        }
};

class derived3 : public derived1, public derived2 // Always Right most class being inherited is the one whose Datamember is coming into the Derived class.
{
    // Here 2 Copies of val in derived3 class
    public:
        void getValue()
        {
            //cout << "Int Value is: " ;
            derived1::getValue();
            cout << endl;
        }
};

int main()
{
    derived3 obj;
    obj.getValue();
    return 0;
}