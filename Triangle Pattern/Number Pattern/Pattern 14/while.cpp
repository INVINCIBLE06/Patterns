/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
            
            1   2   3   4   5
            2           5
            3       5
            4   5
            5  
*/
#include<iostream>
using namespace std;

int main()
{
    int n = 4, i = 1, j = 1, k = 1, count, invcount;
    while(i <= n)
    {
        while(j <= (n - i))
        {
            cout<<"   ";
            j = j + 1;
        }
        count = 1;
        while(k < i + i)
        {
            if(k <= i)
            {
                if(i == 1)
                {
                    cout<<count;
                }
                else
                {
                    cout<<count<<"  ";
                    invcount = count;
                }
            }
            else
            {
                invcount--;
                cout<<invcount<<"  ";
            }
            k = k + 1;
            count = count + 1;
        }
        j = 1;
        k = 1;
        i = i + 1;
        cout << endl;
    }    
};

