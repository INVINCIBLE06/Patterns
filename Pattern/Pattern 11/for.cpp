/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  1
 *                  2 1
 *                  3 2 1
 *                  4 3 2 1
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 3;
    char A = 'A';
    // cout << "Please enter the number of rows you want: ";
    // cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            cout << A;
            cout << " ";
        }
        cout << endl;
        A = A + 1;
    }
}