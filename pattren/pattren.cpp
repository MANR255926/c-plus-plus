#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter number for column : ";
    cin >> c;
    cout << "Enter number for row : ";
    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {

            cout << " @ "; // change it to something that you want to print :)
        }
        cout << endl;
    }
}