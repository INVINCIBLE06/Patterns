/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  A B C
 *                  B C D
 *                  C D E
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 3;
    char A = 'A';
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << A;
            cout << " ";
            A = A + 1;
        }
        A = A - 2;
        cout << endl;
    }
}
