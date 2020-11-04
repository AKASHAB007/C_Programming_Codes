//// CODE: Lecture-14 > Returning References Example Code

#include <iostream>
 
using namespace std;

char s[80] = "Nitte Trust";

char &replace(int i)
{
    return s[i];
}

int main()
{
    replace(5) = 'X'; 

    cout << s << "\n"; 
 
    return 0;
}

/* Test Case Output:

NitteXTrust

*/