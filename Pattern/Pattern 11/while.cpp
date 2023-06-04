/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  A A A
 *                  B B B
 *                  C C C
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 3, i = 1, j = 1;
    // cout << "Please enter the number of rows you want: ";
    // cin >> n;
    char A = 'A';
    while(i <= n)
    {
        while(j <= n)
        {
            cout << A;
            cout << " ";
            j = j + 1;
        }
        j = 1;
        i = i + 1;
        A = A + 1;
        cout << endl;
    }    
};