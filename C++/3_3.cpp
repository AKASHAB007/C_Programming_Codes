//// CODE: P:49-50 > 3.3 - Program to illustrate the Use of bad_alloc exception.

#include <iostream>
 
using namespace std;

class sample
{
    private:
        int data1;
        char data2;

    public:
        void set(int i, char c)
        {
            data1 = i;
            data2 = c;
        }

        void display(void)
        {
            cout << "Data1 = " << data1;
            cout << "\nData2 = " << data2;
        }
};

int main()
{
    sample *s_ptr;

    try
    {
        s_ptr = new sample;
    }
    catch (bad_alloc ba)
    {
        cout << "Bad Allocation occured ...the program will terminate now...";
        return 1;
    }
    
    s_ptr -> set(25, 'A');
    s_ptr -> display();
    cout << "\n";

    delete s_ptr;

    return 0;
}

/* Test Case Output:

Data1 = 25
Data2 = A

*/

//. NOTE: Like any other operators, "new" and "delete" operators can also be overloaded.