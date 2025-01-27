#include <iostream>
#include <cstdlib> // This library is use for rand() function

using namespace std;
int main()
{
    int user, compter;
user_reenter_input:
    cout << endl;
    cout << "1:Rock, 2:Paper, 3:Scissors" << endl;
    cout << "User Enter the number : ";
    cin >> user;
    compter = rand() % 3 + 1; // Pick radome number from 1 to 3
    if (user <= 3 && user >= 1)
    {
        if (user == compter)
            cout << "\nIt's a tie!\n" << " user choice : " << user << " Computer choice : " << compter << endl;
        else if (user == 1 && compter == 3)
            cout << "User wins!" << " user choice : " << user <<"comuters choic : "<< compter << endl;
        else if (user == 2 && compter == 1)
            cout << "User wins!" << " user choice : " << user <<"comuters choic : "<< compter << endl;
        else if (user == 3 && compter == 2)
            cout << "User wins!" << " user choice : " << user <<"comuters choic : "<< compter << endl;
        else
            cout << "\nComputer wins!\n" << " user choice : " << user << " Computer choice : " << compter << endl;
    }
    goto user_reenter_input;
}