#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int SIZE = 3;
    int matrix[SIZE][SIZE];
    for (int r = 0; r < SIZE; r++)
    {
        for (int c = 0; c < SIZE; c++)
        {
            cout << matrix[r][c] << " ";
           
            /*cout << "Matrix[" << r << "][" << c << "]: ";
            cin >> matrix[r][c];*/
        }
        
    }
    return 0;
}