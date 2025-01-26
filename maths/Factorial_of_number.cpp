#include <iostream>
using namespace std;
int main()
{
    int n, p = 1;
    cout << "Enter the number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        p = p * i;
    }
    cout << "The factorial of " << n << " is: " << p;
}