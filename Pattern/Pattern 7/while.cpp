/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  1
 *                  2 2
 *                  3 3 3
 *                  4 4 4 4
 *                  5 5 5 5 5
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 5, i = 1, j = 1;
    // cout << "Please enter the number of rows you want: ";
    // cin >> n;
    while(i <= n)
    {
        while(j <= i)
        {
            cout << i;
            cout << " ";
            j = j + 1;
        }
        j = 1;
        i = i + 1;
        cout << endl;
    }    
};