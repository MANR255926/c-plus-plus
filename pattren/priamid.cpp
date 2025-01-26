#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--) // loop for spaces
        {
            cout << " "; // add 1 more spaces to make right side increasing triangle
        }
        for (int j = 1; j <= i; j++) // loop for characters
        {
            cout << "* ";
        }
        cout << endl;
    }
}