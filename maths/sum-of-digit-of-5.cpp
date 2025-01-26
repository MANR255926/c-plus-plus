#include <iostream>
using namespace std;
int main()
{
    int n, digit, sum = 0;
    cout << "Enter the number : ";
    cin >> n;
    while (n > 0)
    {
        digit = n % 10;
        // cout << digit;
        if (digit > 5)
        {
            sum += digit;
        }
        n /= 10;
    }
    cout << "Sum of digits greater than 5 : " << sum << endl;
    return 0;
}
