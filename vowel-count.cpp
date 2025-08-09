#include <iostream>
using namespace std;

int main()
{
    string str;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'A' ||
            ch == 'e' || ch == 'E' ||
            ch == 'i' || ch == 'I' ||
            ch == 'o' || ch == 'O' ||
            ch == 'u' || ch == 'U')
        {
            count++;
        }
    }

    cout << "Number of vowels = " << count << endl;
    return 0;
}


// #include <iostream>
// using namespace std;

// int main() 
// {
//     string str;
//     int a=0, e=0, i=0, o=0, u=0;

//     cout << "Enter string: ";
//     getline(cin, str);

//     for (int j = 0; j < str.length(); j++) 
//     {
//         char ch = str[j];
//         if (ch == 'a' || ch == 'A') a++;
//         else if (ch == 'e' || ch == 'E') e++;
//         else if (ch == 'i' || ch == 'I') i++;
//         else if (ch == 'o' || ch == 'O') o++;
//         else if (ch == 'u' || ch == 'U') u++;
//     }

//     cout << "A/a: " << a << "\nE/e: " << e << "\nI/i: " << i
//          << "\nO/o: " << o << "\nU/u: " << u << endl;
//     return 0;
// }