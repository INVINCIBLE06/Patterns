/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  A A A
 *                  B B B
 *                  C C C
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
