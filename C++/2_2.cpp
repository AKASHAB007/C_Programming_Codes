//// CODE: P:21 > 2.2 - Program to display the average of two numbers.

#include <iostream>
 
using namespace std;
int main()
{
    float number1, number2, sum, average;

    cout << "Enter the two numbers: ";

    cin >> number1;
    cin >> number2;

    sum = number1 + number2;
    average = sum/2;
 
    cout << "Sum = " << sum << "\n";
    cout << "Average = " << average << "\n";

    return 0;
}

/* Test Case Output:

Enter the two numbers: 2 5
Sum = 7
Average = 3.5

*/