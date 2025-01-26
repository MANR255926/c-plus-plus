#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // int arr = [n];
    int *arr = new int[n]; // dynamically allocates an array of size n.
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << endl
         << "showing the number of elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    delete[] arr; // ensures that the dynamically allocated memory is properly deallocated after use.
}