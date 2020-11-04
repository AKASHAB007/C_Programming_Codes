// Function Overiding program

#include <iostream>
using namespace std;

class Animal
{
    public:
        void makeSound()
        {
            cout << "Animals sound" << endl; 
        }
};

class Dog: public Animal{
    
    public:
        void makeSound()
        {
            cout << "Dogs bark" << endl;   
        } 
};

class Cat: public Animal{

    public:
    void makeSound()
    {
        cout << "Cats meow" << endl;
    }
};

int main()
{
    Animal a1;
    a1.makeSound();

    Dog d1;
    d1.makeSound();

    Cat c1;
    c1.makeSound();

    return 0;
}