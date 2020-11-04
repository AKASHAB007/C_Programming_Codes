//// CODE: P:48 > 3.2 - Program to illustrate the use of "new" and "delete" Operators.

#include <iostream>

using namespace std;
int main()
{
    int *arr;
    int size;

    cout << "Enter the size of the integer array: ";
    cin >> size;

    arr = new int;
    if(!arr)
    {
        cout << "Allocation failed\n";
    }

    cout << "Creating an array of size " << size << "..";
    arr = new int[size];

    cout << "\nDynamic allocation of memory for array arr is Successful.";
 
    delete arr;
    cout << "\n"; 
 
    return 0;
}

/* Test Case Output:

Enter the size of the integer array: 100
Creating an array of size 100..
Dynamic allocation of memory for array arr is Successful.

*/
/* Test Case Output: If their is insufficient memory available and if we are using standard C++, then bad_alloc exception will be thrown instead of null pointer.

Enter the size of the integer array: 99999990000000
terminate called after throwing an instance of 'std::bad_alloc'
  what():  std::bad_alloc
Aborted (core dumped)

*/