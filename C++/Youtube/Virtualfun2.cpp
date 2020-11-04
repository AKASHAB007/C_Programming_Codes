// Virtual Function real-world Implementation.

#include <iostream>
using namespace std;

class Animal
{
    public:
        virtual void eat()
        {
            cout << "I'm Eating Generic Food" << endl;
        }
};

class Cat : public Animal
{
    public:
        void eat()
        {
            cout << "I'm Eating cat food" << endl;
        }
};

class Dog : public Animal
{
    public:
        void eat()
        {
            cout << "I'm Eating dog food" << endl;
        }
};

void function1(Animal *xyz)
{
    xyz->eat();
}

int main()
{
    Animal *ptr;

    Cat catobj;
    Dog dogobj;

    ptr = &catobj;

    function1(ptr); 

    ptr = &dogobj;

    function1(ptr);

    return 0;
}