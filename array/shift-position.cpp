#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int lastElement = arr[size - 1];
    
    // Shift elements to the right
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    
    // Place the last element at the first position
    arr[0] = lastElement;
    
    // Print the shifted array
    cout << "Array after shifting by one position to the right: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}