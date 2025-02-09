#include <iostream>

using namespace std;

int main()
{
    int rows = 4, cols = 5;

    for (int i = 0; i < rows; i++)

    { // Loop through rows
        for (int j = 0; j < cols; j++)
        {
            // Loop through columns
            if (j % 2 == 0)
                cout << ((i % 2 == 0) ? "* " : "+ ");
            // "?" Ternary Operator condition ? value_if_true : value_if_false;

            else
                cout << ((i % 2 == 0) ? "+ " : "* ");
        }

        cout << endl;
    }

    return 0;
}