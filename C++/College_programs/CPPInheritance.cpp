#include <iostream>
using namespace std;

class base
{
    int i,j;
    
    public:
        void set(int a, int b)
        {
            i = a;
            j = b;
        }
        void show()
        {
            cout<<i<<" "<<j<<"\n";
        }
};

class derived : public base{
    int k;
    public:
        derived(int x)
        {
            k=x;
        }
        void showk()
        {
            cout<<k<<"\n";
        }
};

int main()
{
    derived ob(3);  
    ob.set(1,2); // Access member of base
    ob.show(); // Access member of base
    ob.showk(); // Uses member of derived class.

    return 0;
}