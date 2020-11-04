//// CODE: P:35-36 > Program demonstrates the use of "enum" User-defined data type.

#include <iostream>
 
using namespace std;

enum shape 
{
    circle,
    rectangle,
    triangle,
};

int main()
{
    int code;
    cout << "Enter Shape Code: ";
    cin >> code;

    while(code >= circle && code <= triangle)
    {
        switch(code)
        {
            case circle:
                printf(" This is a Circle\n\n");
                break;

            case rectangle:
                printf(" This is a Rectangle\n\n");
                break;

            case triangle:
                printf(" This is a Triangle\n\n");
                break;   
        }
        cout << "Enter the Code: ";
        cin >> code;
    }
    cout << "\n>>>> NO CODE IS MATCHED <<<<\n";
  
    return 0;
}

/* Test Case Output:

Enter Shape Code: 0
This is a Circle

Enter the Code: 1
This is a Rectangle

Enter the Code: 2
This is a Triangle

Enter the Code: 3

>>>> NO CODE IS MATCHED <<<<

*/