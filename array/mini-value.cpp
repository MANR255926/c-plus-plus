#include <iostream>
using namespace std;
int main()
{
    int n, mini;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mini = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini )
        {
            mini = arr[i];
        }
    }
    cout << "Minimum element in the array is: " << mini;
}