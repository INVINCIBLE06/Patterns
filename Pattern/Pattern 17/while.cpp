/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  A 
 *                  B C
 *                  C D E
 *                  D E F G
*/

#include<iostream>
using namespace std;

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
            A = A + 1;
            j = j + 1;
            
        }
        j = 1;
        A = A - (i - 1);
        i = i + 1;
        cout << endl;
    }    
};