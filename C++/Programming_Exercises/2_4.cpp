//// CODE: P:28 > 2.4 - Program to read the values of a, b, and c and display the value of x, where 
/*                       
                        x = a/b - c
*/

#include <iostream>
 
using namespace std;
int main()
{
    float a, b, c, x;
    
    cout << "Enter the values of a, b and c: ";
    cin >> a >> b >> c;

    x = a/b - c;

    cout << "Value of X = " << x << "\n";
 
    return 0;
}
                                                         
/* Test Case Output:

Enter the values of a, b and c: 250 85 25
Value of X = -22.0588

*/
/* Test Case Output:

Enter the values of a, b and c: 300 70 70
Value of X = -65.7143

*/