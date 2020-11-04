//// CODE: Pointer to objects > Example Code:

#include <iostream>
 
using namespace std;

class cl
{
    int i;

    public:
        cl(int j)
        {
            i = j;
        }
        int get_i()
        {
            return i;
        }
};

int main()
{
    cl ob(88), *p;  
    p = &ob;

    cout << p -> get_i() << "\n";

    return 0;
}

/* Test Case Output :

88

*/