//// CODE: P:28 > 2.5 - Program that asks for a temperature in Fahrenheit and display it in Celsius.

#include <iostream>
 
using namespace std;
int main()
{
    float C , F;

    cout << "Enter the Temperature in Fahrenhiet(degree): ";
    cin >> F;
 
    C = (5.0/9.0)*(F - 32.0);

    cout << "Temperature in Celsius(degree) = " << C << "\n";
 
    return 0;
}

/* Test Case Output:

Enter the Temperature in Fahrenhiet(degree): 98.6
Temperature in Celsius(degree) = 37

*/

//// CODE: P:28 > 2.5 - Celsius to Fahrenheit:
/*
#include<iostream>

using namespace std;
int main() 
{
   float F, C;

   cout << "Enter temperature in Celsius(degree): ";
   cin >> C;

   F = (9.0*C/5.0)+32;

   cout << "Equivalent Fahrenheit(degree) temperature is: " << F << "\n";

   return 0;
}

/* Test Case Output: 

Enter temperature in Celsius(degree): 39
Equivalent Fahrenheit(degree) temperature is: 102.2

*/