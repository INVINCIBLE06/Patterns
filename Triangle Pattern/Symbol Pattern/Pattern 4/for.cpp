Box Pattern/Number Pattern/Pattern 11/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  *
 *                  * *
 *                  * * *
 *                  * * * *
 *                  * * * * *
*/


#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    // cout << "Please enter the number of rows you want: ";
    // cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
            cout << " ";
        }
        cout << endl;
    }
}

