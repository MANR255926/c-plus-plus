#include <iostream>
using namespace std;
int main()

{
    int arr[] = {91, 22, 43, 44, 5, 45, 46, 1099};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp = 0;
    cout << "\nOriginal Array: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "\nSorted Array: ";
    for (int i = 0; i < size
                            i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n\nSecond Maximum element in the array is: " << arr[1] << endl;
}