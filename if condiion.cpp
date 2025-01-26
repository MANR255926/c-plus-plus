#include <iostream>
using namespace std;
int main()
{
    int num3, num1, num2;
    cout << "enter number = ";
    cin >> num1;
    cout << "enter number = ";
    cin >> num2;
    cout << "enter number = ";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
        cout << "Number 1 is larger : " << num1;
    else if (num2 > num1 && num2 > num3)
        cout << "Number 2 is larger : " << num2;
    else
        cout << "Number 3 is larger : " << num3;

    return 0;
}
