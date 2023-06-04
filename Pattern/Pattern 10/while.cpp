/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  1
 *                  2 1
 *                  3 2 1
 *                  4 3 2 1
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
        int count = i;
        while(j <= i)
        {
            cout << count;
            cout << " ";
            count = count - 1;
            j = j + 1;
        }
        j = 1;
        i = i + 1;
        cout << endl;
    }    
};