#include <iostream>
using namespace std;
int main()

{
    int arr[5] = {91, 22, 43, 44, 5};
    int temp = 0;
    cout << "Original Array: ";
    
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}