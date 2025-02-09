#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr [n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int avg = sum / (sizeof(arr)/sizeof(arr[0]));
    cout << "Sum of array elements: " << sum << endl;
    cout << "Average of array elements: " << avg << endl;
    return 0;
}