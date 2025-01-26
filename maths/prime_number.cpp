#include <iostream>
using namespace std;
int main()
{
    int n, P = 1;
    cout << "Enter a number: "; // User input
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            P = 0;
        }
    }

    if (P == 1)
    {
        cout << "Prime number : " << n << endl;
    }

    else
    {
        cout << "Not a prime number : " << n << endl;
    }
}