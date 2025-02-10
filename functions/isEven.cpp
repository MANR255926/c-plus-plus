#include <iostream>
using namespace std;
// Function to check if a number is even
bool isEven(int number)
{
    return (number % 2 == 0);
}
int main()
{
    int arr[7];
    // Input 7 integers from the user
    cout << "Enter 7 integers: ";
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    // Check and display if each number is even
    for (int i = 0; i < 7; i++)
    {
        if (isEven(arr[i]))
        {
            cout << arr[i] << " is even." << endl;
        } 
        else
        {
            cout << arr[i] << " is odd." << endl;
        }
    }
    
    return 0;
}