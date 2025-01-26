#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // top part
    for (int i = 0; i < n; i++)
    {
        // spaces before
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << "*";

        if (i != 0)
        {
            // spaces between
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }

    // bottom part
    for (int i = 0; i < n - 1; i++)
    {
        // spaces before
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }

        cout << "*";

        if (i != n - 2)
        {
            // spaces between
            for (int j = 0; j < 2 * (n - i - 2) - 1; j++)
            {
                cout << " ";
            }

            cout << "*" << endl;
        }
    }
}