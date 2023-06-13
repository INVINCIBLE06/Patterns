/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
                  *
                * *
              * * *
            * * * *
*/


#include<iostream>
using namespace std;

int main()
{
    int n = 4, i = 1, j = 1, k = 1;
    // cout << "Please enter the number of rows you want: ";
    // cin >> n;
    char D = 'D';
    while(i <= n)
    {
        while(j <= i)
        {
            cout << " ";            
        }

        while(k <= i)
        {
            cout <<"*";
        }
        j = 1;
        k = 1;
        i = i + 1;
        cout << endl;
    }    
};