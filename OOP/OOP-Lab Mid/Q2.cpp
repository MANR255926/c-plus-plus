#include <iostream>
using namespace std;

class BankAccount
{
    int accountNumber;
    float balance;
    float deposit = 0;
    float withdraw = 0;

public:
    BankAccount(int account_number, float balance)
    {
        this->accountNumber = account_number;
        this->balance = balance;
    }

    void getac()
    {
        cout << "Enter Account No.: ";
        cin >> accountNumber;
    }

    void getdep()
    {
        cout << "Deposit amount: ";
        cin >> deposit;
        balance += deposit;
    }

    void printdip()
    {
        cout << "Deposit is: " << deposit << endl;
    }

    void getwithdraw()
    {
        cout << "Enter withdrawal amount: ";
        cin >> withdraw;

        if (withdraw <= balance)
        {
            balance -= withdraw;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
            withdraw = 0;
        }
    }

    void totalbalance()
    {
        cout << "Total balance = " << balance << endl;
    }
};

int main()
{
    BankAccount obj(12345, 5000);

    obj.getac();
    obj.getdep();
    obj.printdip();
    obj.getwithdraw();
    obj.totalbalance();

    return 0;
}