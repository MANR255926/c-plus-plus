#include <iostream>
using namespace std;
int main()
{
    int n = 0, p = 1;
    cout << "Enter the number of terms: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        p *= arr[i];
    }
    cout << "The product of all elements in the array is: " << p;
    return 0;
}