#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (n % i != 0)
        {
            cout << "Prime number : " << n << endl;
            break;
        }

        if (n % i == 0)
        {
            cout << "Not Prime number : " << n << endl;
            break;
        }
    }
    return 0;
}