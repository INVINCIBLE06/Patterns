/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
                      1
                    2 2
                  3 3 3
                4 4 4 4
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 4;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= (n - i); j++)
        {
            cout<<"    ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout<< i;
            if (k != i) 
            {
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}