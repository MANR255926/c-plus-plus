#include <iostream>

using namespace std;

int main()
{
    int num, digit, incremented_num = 0;

    cout << "Enter a 4-digit number: ";
    cin >> num;

    // Ensure the input is a 4-digit number
    if (num < 1000 || num > 9999)
    {
        cout << "Please enter a valid 4-digit number." << endl;
        return 1;
    }

    // Increment each digit by 1
    for (int i = 0; i < 4; i++)
    {
        digit = num % 10;
        digit = (digit + 1) % 10; // Handle 9 to 0 carry-over
        incremented_num = incremented_num * 10 + digit;
        num /= 10;
    }

    // Reverse the digits to get the final incremented number
    int reversed_num = 0;
    while (incremented_num > 0)
    {
        digit = incremented_num % 10;
        reversed_num = reversed_num * 10 + digit;
        incremented_num /= 10;
    }

    cout << "The incremented number is: " << reversed_num << endl;

    return 0;
}