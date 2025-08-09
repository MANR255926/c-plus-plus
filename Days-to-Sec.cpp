#include <iostream>

using namespace std;

int main()
{
    int days, hours, minutes, seconds;
    cout << "Enter the number of days: ";
    cin >> days;
    hours = days * 24;
    minutes = hours * 60;
    seconds = minutes * 60;
    cout << days << " days = " << hours << " hours = " << minutes << " minutes = " << seconds << " seconds" << endl;
}

// #include <iostream>
// using namespace std;

// int convertToSeconds(int days) 
// {
//     const int SECONDS_IN_DAY = 86400;
//     return days * SECONDS_IN_DAY;
// }

// int main() 
// {
//     int days;
//     cout << "Enter days: ";
//     cin >> days;
//     cout << "Total seconds = " << convertToSeconds(days) << endl;
//     return 0;
// }