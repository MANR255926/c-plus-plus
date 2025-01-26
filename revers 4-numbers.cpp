#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "Enter the number : ";
    cin >> n;
    if (n >= 1000 && n <= 9999)
    {
        cout << "Reverse number : ";
        for (int i = 0; i < 4; i++)
        {
            cout << n % 10;
            n = n / 10;
        }
    }
    else
        cout << "Invalid number : " << n << endl;
}