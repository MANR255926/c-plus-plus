#include <iostream>
using namespace std;
int main()
{
    // known values
    int D2array[4][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}, {1, 2, 3}}; //[row][column] = {element of 1 row}, {element of 2 row}...}};
    int row = 4;
    int col = 3;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << D2array[i][j] << "\t";
        }
        cout << endl;
    }

    // taking values from user
    // input loops
    int userArray[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the values for 2D array at index: " << i << j << ": ";
            cin >> userArray[i][j];
            cout << endl;
        }
    }

    // output loops
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << userArray[i][j] << "\t";
        }
        cout << endl;
    }
}