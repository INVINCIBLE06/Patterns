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
    int n = 4;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < i; j++)
        {
            cout<<"  ";
        }
        for (int k = 1; k <= (n-(i-1)); k++)
        {
            if(i != 1)
            {
                cout<< k + (i - 1)<< " ";
            }
            else
            {
                cout<< k << " " ;
            }
        }
        cout<<endl;
    }
}