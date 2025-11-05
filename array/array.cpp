#include <iostream>
// #include <array>
// #include <string>
using namespace std;
int main()
{
    int array[]{9, 1, 2, 3, 4, 3}; /*it will automatically define the size of the array.if "[]" are empty.
    it is not compulsory "=" in [] between {1,2,} */
    array[0] = 0;               // we can change the value of array like this after declaration of all values
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        cout << array[i] << "\t";
    }
    cout << endl;
    cout << sizeof(array) << endl;                    /*int type is usually have 4 bytes,so 4 x 5 (4 bytes x 5 elements) = 20 bytes.*/
    cout << sizeof(array) / sizeof(array[0]) << endl; /*To find out how many elements an array has, you have to divide the size of the array by the size of the first element in the array*/
}