#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << " "; // add 1 more space to make right side decreasing tangle
        }
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}