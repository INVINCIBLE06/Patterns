/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
                      1
                    2 3
                  4 5 6
                7 8 9 10  
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 4, i = 1, j = 1, k = 1, count = 1;
    while(i <= n)
    {
        while(j <= (n - (i)))
        {
            cout<<"   ";
            j = j + 1;
        }

        while(k <= i)
        {
            if(i == 1)
            {
                cout<<count;
            }
            else
            {
                cout<<count<<"  ";
            }
            count++; 
            k = k + 1;
        }
        j = 1;
        k = 1;
        i = i + 1;
        cout << endl;
    }    
};

