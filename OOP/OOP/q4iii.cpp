#include <iostream>
using namespace std;

class Employee {
private:
    int workingHoursPerDay;
    int presentDays;
    const int totalDaysInMonth = 30;
    const int daysOffPerWeek = 2;
    const int salaryPerHour = 1000;

public:
    // Get data from user
    void inputData() {
        cout << "Enter working hours per day: ";
        cin >> workingHoursPerDay;

        cout << "Enter how many days employee was present (max 22): ";
        cin >> presentDays;
    }

    // Calculate expected working days (after weekly off)
    int getExpectedWorkingDays() {
        int totalOffs = (totalDaysInMonth / 7) * daysOffPerWeek;
        return totalDaysInMonth - totalOffs;
    }

    // Calculate and show salary
    void calculateSalary() {
        int expectedDays = getExpectedWorkingDays();
        int absents = expectedDays - presentDays;

        int salary = workingHoursPerDay * presentDays * salaryPerHour;
        int deduction = absents * salaryPerHour;

        cout << "-->> Salary Slip \n";
        cout << "Expected Working Days: " << expectedDays << endl;
        cout << "Present Days: " << presentDays << endl;
        cout << "Absent Days: " << absents << endl;
        cout << "Gross Salary: " << salary << " PKR" << endl;
        cout << "Deduction: " << deduction << " PKR" << endl;
        cout << "Net Salary: " << salary << " PKR" << endl;
    }
};

int main() {
    Employee emp;
    emp.inputData();
    emp.calculateSalary();

    return 0;
}

