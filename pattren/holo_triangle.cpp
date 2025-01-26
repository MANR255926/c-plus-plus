#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 0; i < n; i++) // rep loop
    {
        for (int j = 0; j < n - i - 1; j++) // before spaces
        {
            cout << " ";
        }

        cout << "*";

        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++) // after spaces
            {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "* ";
    }
}