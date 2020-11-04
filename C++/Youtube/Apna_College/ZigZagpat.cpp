// Key Factor to print such pattern is to see the Common things in rows and columns we want to print stars.
// Here (R+C)%4==0 we used to print star in that case.
// As well when row=2 and j%4==0 we print star. othercases spaced. 

#include <iostream>
 
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(((i+j)%4==0) || (i==2 && j%4==0))
                cout << "* ";

            else
                cout<<"  ";
        }
        cout << endl;
    }
    return 0;
}