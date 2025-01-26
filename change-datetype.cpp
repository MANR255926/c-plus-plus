#include <iostream>
using namespace std;
int main()
{
    float num1 = 1.2;
    char ch = 'A';
    cout << "my ch : " << ch << endl;
    cout << "my ch ascii value : " << static_cast<int>(ch) << endl; // output will be in ascii
    cout << "my float value in int : " << static_cast<int>(num1);

    return 0;
}