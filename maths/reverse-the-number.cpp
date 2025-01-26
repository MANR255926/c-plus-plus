#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "Enter the number : " << endl;
    cin >> n;
    if (n >= 1000 && n <= 9999)
    {
        for (int i = 0; i < 4; i++)
        {
            cout << n % 2;
            n = n / 10;
        }
        else cout << "Invalid number : " << n << endl;
    }
}
// {
//     int num = 0, result = 0, reverse = 0;
//     cout << "enter 4 digit number : ";
//     cin >> num;
//     if (num > 1000 && num < 9999)
//     {
//         for (int i = 0; i < num; i++)
//         {
//             result = num % 10; // give last digit
//             reverse = result * 10 + num;
//         }
//         cout << reverse << endl;
//     }
//     else
//         cout << "invalid number" << endl;
// }