/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  1 1 1
 *                  2 2 2
 *                  3 3 3
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter the number of rows you want: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << i;
            cout << " ";
        }
        cout << endl;
    }
}

