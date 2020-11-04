//// DEBUGGING EXERCISES : P:27 

//. NOTE: To use a particular code uncomment the comment tag /* which is just below the Exercise number.

// 2.1 << Exercise Number
/*
#include <iostream>

using namespace std;

int main()   //* If used void the compiler is showing error that main should return integer.
{
    int i = 0;
    i = i + 1;

    cout << i << " ";
    // i = i + 1; since this is a comment the value of 'i' is not incremented it is still 1.

    cout << i << "\n";

    return 0;
}

/* Output :

1 1

*/

// 2.2 
/*
#include <iostream>
 
using namespace std;
int main()
{
    short i = 2500, j = 3000;
    cout << "i + j = " << -(i+j) << "\n";
  
    return 0;
}
/* Output:

i + j = -5500

*/

// 2.3 
/*
#include <iostream>
 
using namespace std;
int main()
{
    int i = 10, j = 5;
    
    int modresult;
    int divresult;

    modresult = i%j;
    cout << modresult << " " ;

    divresult = i/j;  // if 'i' is divided by 'modresult' i.e Zero, then Floating point exception error occurs. 
    cout << divresult << "\n";
 
    return 0;
}

/* Output :

0 2

*/