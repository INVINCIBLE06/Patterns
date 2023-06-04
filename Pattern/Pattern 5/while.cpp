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
    int n = 3, i = 0, j = 0;
    // cout << "Please enter the number of rows you want: ";
    // cin >> n;
    int a = 1;
    while(i < n)
    {
        while(j < n)
        {
            cout << a;
            cout << " ";
            a = a + 1;
            j = j + 1;
        }
        j = 0;
        i = i + 1;
        cout << endl;
    }    
};