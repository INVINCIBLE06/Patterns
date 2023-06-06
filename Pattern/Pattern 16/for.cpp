/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  A 
 *                  B C
 *                  D E F
                    G H I J
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 4;
    char A = 'A';
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << A;
            cout << " ";
             A = A + 1;
        }
        cout << endl;
    }
}
