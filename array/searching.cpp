#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cout << "Enter the number of terms: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++)
    cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
        if (arr[j] > arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
        }
    }
    cout<<"sorted array : ";
    for (int i = 0; i < n; i++)
    cout<< arr[i];

}