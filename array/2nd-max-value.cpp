#include <iostream>
#include <limits.h> // for INT_MIN
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 25, 35,34};
    int size = sizeof(arr) / sizeof(arr[0]);

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        } 
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
    {
        cout << "There is no second largest element." << endl;
    } 
    else
    {
        cout << "The second largest element is: " << second << endl;
    }

    return 0;
}