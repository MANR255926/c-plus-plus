#include <iostream>
using namespace std;
int main()
{
    int arr1[4];
    float arr2[]{1.3, 2.4, 3.5, -4.5};
    string arr3[]{"a", "b", "c", "d"};

    // arr = {1,2,3,4,5};  we can not initialize list like that
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;
    arr1[3] = 4;
    cout << "Int Array at index '3' : " << arr1[3] << endl;

    cout << "Float Array : ";
    for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
    {
        cout << arr2[i] << "\t";
    }

    cout << endl;

    cout << "String Array : ";
    for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++)
    {
        cout << arr3[i] << "\t";
    }
}