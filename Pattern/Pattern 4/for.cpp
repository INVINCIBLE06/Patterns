/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  n n-1 n-2 . . . . . n
 *                  n n-1 n-2 . . . . . n
 *                  n n-1 n-2 . . . . . n
 *                  
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
        int a = n;
        for(int j = 1; j <= n; j++)
        {
            cout << a;
            cout << " ";
            a = a - 1;
        }
        cout << endl;
    }
}

