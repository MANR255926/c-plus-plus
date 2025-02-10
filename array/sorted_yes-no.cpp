#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool isSorted = true;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])// if first element is bigger then scond it means not sorted 
        {
            isSorted = false;
            break;
        }
    }

    if (isSorted)
    {
        cout << "The array is sorted in ascending order." << endl;
    }
    else
    {
        cout << "The array is not sorted in ascending order." << endl;
    }

    return 0;
}