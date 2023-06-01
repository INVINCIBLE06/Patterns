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
    int n, i = 0, j = 0;
    cout << "Please enter the number of rows you want: ";
    cin >> n;
    while(i < n)
    {
        int a = n;
        while(j < n)
        {
            cout << a;
            cout << " ";
            a = a - 1;
            j = j + 1;
        }
        j = 0;
        i = i + 1;
        cout << endl;
    }    
};