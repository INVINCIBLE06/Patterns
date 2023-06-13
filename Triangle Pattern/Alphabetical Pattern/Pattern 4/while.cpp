/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  D 
 *                  C D
 *                  B C D
 *                  A B C D
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 4, i = 1, j = 1;
    // cout << "Please enter the number of rows you want: ";
    // cin >> n;
    char D = 'D';
    while(i <= n)
    {
        while(j <= i)
        {
            D = (D + j - 1)
            cout << D;
            cout << " ";
            
        }
        j = 1;
        D--;
        i = i + 1;
        cout << endl;
    }    
};