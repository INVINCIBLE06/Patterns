/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  A B C
 *                  A B C
 *                  A B C
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 3, i = 1, j = 1;
    // cout << "Please enter the number of rows you want: ";
    // cin >> n;
    while(i <= n)
    {
        char A = 'A';
        while(j <= n)
        {
            cout << A;
            cout << " ";
            j = j + 1;
            A = A + 1;
        }
        j = 1;
        i = i + 1;
        cout << endl;
    }    
};