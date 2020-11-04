//// CODE: Lecture-14  > Example code for Reference parameter and also Pass by address using pointers.

#include <iostream>
 
using namespace std;

void neg1(int &i)
{
    i = -i;
}

void neg2(int *i)
{
    *i = -(*i);
}

int main()
{
    int x = 10, y = 20;

    // Call by reference or Pass by Reference.
    cout << x << " negated is " ;
    neg1(x);

    cout << x << "\n";
    
    // Call by Pointer or Pass by Address.
    cout << y << " negated is " ;
    neg2(&y);

    cout << y << "\n";

    return 0;
}

/* Test Case Output:

10 negated is -10
20 negated is -20

*/