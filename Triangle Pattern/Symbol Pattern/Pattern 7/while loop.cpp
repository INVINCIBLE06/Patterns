/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
                   * * * * * * * * *
                    * * * * * * * *
                     * * * * * * *
                      * * * * * *
                       * * * * *
                        * * * *
                         * * *
                          * *
                           *                 
*/


#include<iostream>
using namespace std;

int main()
{
    int n, i = 0, j = 0;
    cout << "Please enter the number of rows you want: ";
    cin >> n;
    while(i < n)
    {
        while(j < n)
        {
            cout << "*";
            cout << " ";
            j = j + 1;
        }
        j = 0;
        i = i + 1;
        cout << endl;
    }    
};
