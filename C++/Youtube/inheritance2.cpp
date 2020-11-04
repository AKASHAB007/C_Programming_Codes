// Inheritance-2

#include <iostream>
using namespace std;

class MyBaseClass
{
    public:
        int x;
        MyBaseClass()
        {
            x=5;
            y=5;
            z=5;
        }

        void printProtectedData()
        {
            cout << "Y : " << y << endl;
        }

    protected:
        int y;
    private:
        int z;
};

class MyDerivedClass2 : public MyBaseClass
{

};

class MyDerivedClass3 : public MyBaseClass
{

};

void myOutsideFunction(MyBaseClass obj)
{
    //cout<< "x: " << obj.x << endl;
    // obj.printProtectedData();
    //cout<< "z: " << obj.z << endl;
}

int main()
{
    MyBaseClass obj1;
    MyDerivedClass2 obj2;
    MyDerivedClass3 obj3;

    cout << "X: " << obj3.x << endl;
    //myOutsideFunction(obj1);

    return 0;
}