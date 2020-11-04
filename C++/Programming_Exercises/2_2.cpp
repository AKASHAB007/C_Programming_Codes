//// CODE: P:28 > 2.2 - Program to read two numbers from the user and display the larger value.

#include <iostream>
 
using namespace std;
int main()
{
    int a, b;

    cout << "\nEnter two numbers: "; 
    cin >> a >> b;
 
    if(a > b)
    cout << "Larger is " << a << "\n";

    else
    cout << "Larger is " << b << "\n";    

    return 0;
}

/* Test Case Output:

Enter two numbers: 50 45
Larger is 50

*/