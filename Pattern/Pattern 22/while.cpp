/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
                    1 1 1 1
                      2 2 2
                        3 3
                          4
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 4, i = 1, j = 1, k = 1;
    // cout << "Please enter the number of rows you want: ";
    // cin >> n;
    while(i <= n)
    {
        while(j < i)
        {
            cout <<" ";
            j = j + 1;
        }
        while(k <= (n - (i - 1)))
        {
            cout <<i;
            k = k + 1;
        }
        j = 1;
        k = 1;
        i = i + 1;
        cout << endl;
    }    
};