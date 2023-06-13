/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  A 
 *                  B C
 *                  D E F
                    G H I J
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 4, i = 1, j = 1;
    // cout << "Please enter the number of rows you want: ";
    // cin >> n;
    char A = 'A';
    while(i <= n)
    {
        while(j <= i)
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
