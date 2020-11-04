/* Printing the Following Pattern:

        * * * * *
        *       *
        *       *
        *       *
        * * * * *    
*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, R, C;
    cout << "Enter the No.of Rows and Columns: ";
    cin >> R >> C;

    for(i = 1; i <= R; i++)
    {
        for(j = 1; j <= C; j++)
        {
            if(i == 1 || i == R || j == 1 || j == C)
                cout << "* ";

            else
                cout << "  ";
        }
        cout << "\n";
    }
    return 0; 
}