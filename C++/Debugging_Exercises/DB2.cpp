//// DEBUGGING EXERCISES : P:65-66 

//. NOTE: To use a particular code uncomment the comment tag /* which is just below the Exercise number.

// 3.1 << Exercise Number
/*
#include <iostream>
 
using namespace std;
int main()                  // If void is Used instead of int then -> error: ‘::main’ must return ‘int’ will be popped up.
{
    int i = 0;   
    i = 400*400/400;

    cout << "i = " << i << "\n"; // Output will be i = 400.
} */

//// 3.2

#include <iostream>
 
using namespace std;
int main()
{
    int num[] = {1, 2, 3, 4, 5, 6};

    num[1] == 2 ? cout << "SUCCESS" << "\n" : cout << "ERROR" << "\n"; // num[1] == [1]num will display a big error.
  
    return 0;
}

