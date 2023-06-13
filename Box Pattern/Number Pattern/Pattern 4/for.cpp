/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  1 2 3
 *                  4 5 6
 *                  7 8 9
 *                  
*/


#include<iostream>
using namespace std;

int main()
{
    int n = 3;
    // cout << "Please enter the number of rows you want: ";
    // cin >> n;
    int a = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << a;
            cout << " ";
            a = a + 1;
        }
        cout << endl;
    }
}

