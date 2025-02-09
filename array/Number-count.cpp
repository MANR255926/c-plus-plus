#include <iostream>
using namespace std;
int main()
{
    int n = 0, count = 0, f;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Enter the number to find the count: ";
    cin >> f;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == f)
        count ++;
    }
    cout << "The count of this "<<f<< " in the array number is : "<< count ;
    return 0;
}