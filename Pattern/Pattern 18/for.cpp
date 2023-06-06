/**
 * The below code is for printing the partter
 *          The pattern will be like this :-
 *                  D 
 *                  C D
 *                  B C D
 *                  A B C D
*/

#include <iostream>
int main() {
    int numRows = 4;  // Number of rows in the pattern
    char D = 'D';
    for (int i = 1; i <= numRows; i++) 
    {
        for (int j = 1; j <= i; j++)
        {
            char letter = (D + j - 1);
            std::cout << letter << " ";
        }
        std::cout << std::endl;
        D--;
    }
    return 0;
}
