/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  1
 *                  2 3
 *                  3 4 5
 *                  4 5 6 7
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 4;
    // cout << "Please enter the number of rows you want: ";
    // cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int a = i;
        for(int j = 1; j <= i; j++)
        {
            cout << a;
            cout << " ";
            a = a + 1;
        }
        cout << endl;
    }
}