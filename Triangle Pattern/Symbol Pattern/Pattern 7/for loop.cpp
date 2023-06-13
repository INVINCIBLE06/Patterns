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
    int n;
    cout << "Please enter the number of rows you want: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "*";
            cout << " ";
        }
        cout << endl;
    }
}

