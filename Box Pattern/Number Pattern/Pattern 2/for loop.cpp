/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  1 2 3 4
 *                  1 2 3 4
 *                  1 2 3 4
 *                  1 2 3 4
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
        for(int j = 1; j <= n; j++)
        {
            cout << j;
            cout << " ";
        }
        cout << endl;
    }
}

