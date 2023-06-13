/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  3 2 1
 *                  3 2 1
 *                  3 2 1
 *                  
*/


#include<iostream>
using namespace std;

int main()
{
    int n = 3; 
    for(int i = 1; i <= n; i++)
    {
        int a = n;
        for(int j = 1; j <= n; j++)
        {
            cout << a;
            cout << " ";
            a = a - 1;
        }
        cout << endl;
    }
}

