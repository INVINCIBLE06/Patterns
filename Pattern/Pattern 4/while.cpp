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
    int n = 3, i = 0, j = 0;
    while(i < n)
    {
        int a = n;
        while(j < n)
        {
            cout << a;
            cout << " ";
            a = a - 1;
            j = j + 1;
        }
        j = 0;
        i = i + 1;
        cout << endl;
    }    
};
