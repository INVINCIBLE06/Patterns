/**
        The below code is for printing the partter
            The pattern will be like this :-
                1 2 3 4 5 5 4 3 2 1
                1 2 3 4 * * 4 3 2 1
                1 2 3 * * * * 3 2 1
                1 2 * * * * * * 2 1
                1 * * * * * * * * 1
*/

#include<iostream>
using namespace std;
int main()
{
    int n = 6;
    
    for(int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n; k++)
        {
            if(k == 1)
            {
                cout<<k<<" ";
            }
            else
            {
                if(k > (n-(i-1)))
                {
                    cout<<"*"<<" ";
                }
                else
                {
                    cout<<k<<" ";
                }
            }
        }
        for(int l = n; l>= 1; l--)
        {
            if(l == 1)
            {
                cout<<l<<" ";
            }
            else
            {
                if(l > (n - (i-1)))
                {
                    cout<<"*"<<" ";
                }
                else
                {
                    cout<<l<<" ";
                }
            }
        }
        cout<<endl;
    }
}