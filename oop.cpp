#include<iostream>
using namespace std;
int main()
{

     int userArray[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the values for 2D array at index: " << i << j << ": ";
            cin >> userArray[i][j];
            cout << endl;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << userArray[i][j] << "\t";
        }
        cout << endl;
    }
}