/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  A B C
 *                  A B C
 *                  A B C
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 3;
    // cout << "Please enter the number of rows you want: ";
    // cin >> n;
    for(int i = 1; i <= n; i++)
    {
        char A = 'A';
        for(int j = 1; j <= 3; j++)
        {
            cout << A;
            cout << " ";
            A = A + 1;
        }
        cout << endl;
    }
}
