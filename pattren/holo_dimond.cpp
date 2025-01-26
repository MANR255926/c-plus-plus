#include <iostream>

using namespace std;

int main()

{
    int a, b, c;

    for (a = 1; a <= 3; a++)
    {
        if (a == 2)
        {
            cout << "  &" << endl;
        }
    }

    for (b = 1; b <= 3; b++)
    {
        if (b == 1 || b == 3)
        {
            cout << "&   ";
        }
    }

    cout << endl;

    for (c = 1; c <= 3; c++)
    {
        if (c == 3)
        {
            cout << "  &" << endl;
        }
    }
}