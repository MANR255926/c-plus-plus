#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1;
    cout << a << endl
         << b << endl;

    for (int i = 2; i < 15; i++)
    {
        int c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int fib[15];
//     fib[0] = 0;
//     fib[1] = 1;

//     for (int i = 2; i < 15; i++)
//     {
//         fib[i] = fib[i - 1] + fib[i - 2];
//     }

//     for (int i = 0; i < 15; i++)
//     {
//         cout << fib[i] << " ";
//     }

//     return 0;
// }