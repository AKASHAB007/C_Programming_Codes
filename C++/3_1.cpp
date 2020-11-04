//// CODE: P:44-45 > 3.1 - Program to illustrate the use of scope resolution operator.

#include <iostream>
 
using namespace std;

int m = 10; // GLOBAL DECLARATION OF "m"

int main()
{
    int m = 20; // Declaration of "m" inside the main() function.
    
    {
        int k = m;
        int m = 30; // Redeclaration of "m".

        cout << "We are in the inner Block:\n";
        cout << "K = " << k << "\n";
        cout << "m = " << m << "\n";
        cout << "::m = " << ::m << "\n";
    }
 
    cout << "\n" << "We are in the outer Block:\n";
    cout << "m = " << m << "\n";
    cout << "::m = " << ::m << "\n";
 
    return 0;
}