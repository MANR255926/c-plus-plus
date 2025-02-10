#include <iostream>
using namespace std;
// Function to check if a number is divisible by 3
bool isDivisibleBy3(int number)
{
    return (number % 3 == 0);
}
int main()
{
    int numbers[5];
    // Input 5 integers from the user
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }   
    // Check and display if each number is divisible by 3
    for (int i = 0; i < 5; i++)
    {
        if (isDivisibleBy3(numbers[i]))
        {
            cout << endl << numbers[i] << " is divisible by 3." << endl;
        }
        else
        {
            cout << endl << numbers[i] << " is not divisible by 3." << endl;
        }
    }
    
    return 0;
}