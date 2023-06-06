/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
                  1 2 3 4
                    2 3 4
                      3 4
                        4
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 4, i = 1, j = 1, k = 1;
    while(i <= n)
    {
        while(j <= (n - i) )
        {
            cout<<"    ";
            j = j + 1;
        }
        while(k <= i)
        {
            cout <<i;
            if (k != i) 
            {
                cout<<"   ";
            }
            k = k + 1;
        }
        j = 1;
        k = 1;
        i = i + 1;
        cout << endl;
    }    
};