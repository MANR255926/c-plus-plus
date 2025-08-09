#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (isPrime(i))
            cout << i << " is Prime\n";
        else
            cout << i << " is Composite\n";
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         int divisorCount = 0;
//         for (int j = 1; j <= i; j++)
//         {
//             if (i % j == 0)
//                 divisorCount++;
//         }

//         if (i == 1)
//             cout << i << " is Neither Prime Nor Composite\n";
//         else if (divisorCount == 2)
//             cout << i << " is Prime\n";
//         else
//             cout << i << " is Composite\n";
//     }
//     return 0;
// }