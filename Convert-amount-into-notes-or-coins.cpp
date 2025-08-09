#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter amount: ";
    cin >> amount;

    int notes[10] = {5000, 1000, 500, 100, 50, 20, 10, 5, 2, 1};
    string labels[10] =
        {
            "Five thousand rupees note(s)",
            "Thousand rupees note(s)",
            "Five hundred rupees note(s)",
            "Hundred rupees note(s)",
            "Fifty rupees note(s)",
            "Twenty rupees note(s)",
            "Ten rupees note(s)",
            "Five rupees coin(s)",
            "Two rupees coin(s)",
            "One rupees coin(s)"};

    for (int i = 0; i < 10; i++)
    {
        int count = amount / notes[i];
        amount %= notes[i];
        cout << labels[i] << "\t= " << (count < 10 ? "0" : "") << count << endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main() 
// {
//     int amount;
//     cout << "Enter amount: ";
//     cin >> amount;

//     int notes[] = {5000, 1000, 500, 100, 50, 20, 10, 5, 2, 1};
//     string labels[] = 
//     {
//         "5000", "1000", "500", "100", "50", "20", "10", "5", "2", "1"
//     };

//     int i = 0;
//     while (amount > 0 && i < 10) 
//     {
//         int count = amount / notes[i];
//         amount %= notes[i];

//         cout << labels[i] << " rupee(s): " << count << endl;
//         i++;
//     }

//     return 0;
// }