/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  1
 *                  2 3
 *                  4 5 6
 *                  7 8 9 10
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 4, i = 1, j = 1;
    // cout << "Please enter the number of rows you want: ";
    // cin >> n;
    int count = 1;
    while(i <= n)
    {
        while(j <= i)
        {
            cout << count;
            cout << " ";
            count = count + 1;
            j = j + 1;
        }
        j = 1;
        i = i + 1;
        cout << endl;
    }    
};