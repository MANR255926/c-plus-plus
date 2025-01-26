#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    char operation;
    cout << "Enter number = ";
    cin >> n1;
    cout << "Enter number = ";
    cin >> n2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    if (operation == '+')
        cout << "Addition = " << n1 + n2 << endl;

    else if (operation == '-')
        cout << "Subtraction = " << n1 - n2 << endl;

    else if (operation == '*')
        cout << "Multiplication = " << n1 * n2 << endl;

    else if (operation == '/')
        cout << "Division = " << n1 / n2 << endl;
}