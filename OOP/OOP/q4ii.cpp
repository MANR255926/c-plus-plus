#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    // Default constructor
    Date() {
        day = 1;
        month = 1;
        year = 2000;
    }

    // Overloaded constructor
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Input date
    void inputDate()
	 {
        cout << "Enter day (1-31): ";
        cin >> day;

        cout << "Enter month (1-12): ";
        cin >> month;

        cout << "Enter year (e.g. 2024): ";
        cin >> year;
    }

    // Convert to total days
    int toDays() const {
        return year * 365 + month * 30 + day;
    }

    // Operator overloading to subtract dates
    int operator-(const Date& other) const {
        return this->toDays() - other.toDays();
    }

    // Display the date
    void display() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date startDate, endDate;

    cout << "--- Enter Starting Date ---\n";
    startDate.inputDate();

    cout << "\n--- Enter Ending Date ---\n";
    endDate.inputDate();

    // Calculate working days
    int daysWorked = endDate - startDate;

    cout << "\nTotal working days: " << daysWorked << " days" << endl;

    return 0;
}

