//// CODE: P:28 > 2.3 - Program to read the character from the user and print its ASCII Value.

#include <iostream>
 
using namespace std;
int main()
{
    char character;

    cout << "Enter the Character: ";
    cin >> character;
 
    cout << "ASCII Value of " << character << " is " << (int)character << "\n";
 
    return 0;
}

/* Test Case Output:

Enter the Character: K
ASCII Value of K is 75

*/
/* Test Case Output 2:

Enter the Character: u
ASCII Value of u is 117

*/