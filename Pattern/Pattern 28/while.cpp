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
    int n = 5, i = 1, j = 1, k = n;
    while(i <= n)
    {
        while(j <= n)
        {
            if(i == 1)
            {
                cout<<j<<" ";
                j = j + 1;
            }
            else
            {
                if(j <= (n - (i - 1)))
                {
                    cout<<j<<" ";
                    j = j + 1;
                }
                else
                {
                    cout<<"*"<<" ";
                    j++;
                }
            }
        }
        
        while(k >= 1)
        {
            if(i == 1)
            {
                cout<<k<<" ";
            }
            else
            {
                if(k <= (n - (i - 1)))
                {
                    cout<<k<<" ";
                }
                else
                {
                    cout<<"*"<<" ";
                }
            }
            k--;
        }
        j = 1;
        k = n;
        i = i + 1;
        cout << endl;
    }    
};
