#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Read the entire line including spaces

    for (int i = 0; i < str.length(); i++)
    {
        if (islower(str[i]))
            str[i] = toupper(str[i]);

        else if (isupper(str[i]))
            str[i] = tolower(str[i]);
    }

    cout << "Converted string: " << str << endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() 
// {
//     string str;
//     cout << "Enter string: ";
//     getline(cin, str);

//     for (int i = 0; i < str.length(); i++) 
//     {
//         char ch = str[i];
//         if (ch >= 'a' && ch <= 'z')
//             str[i] = ch - 32;  // Convert to uppercase
//         else if (ch >= 'A' && ch <= 'Z')
//             str[i] = ch + 32;  // Convert to lowercase
//     }

//     cout << "Converted: " << str << endl;
//     return 0;
// }