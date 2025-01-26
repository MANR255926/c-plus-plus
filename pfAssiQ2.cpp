#include <iostream>
#include <string>
#include <numeric>
using namespace std;

const int REPS = 5;
const int MONTHS = 12;

void inputRevenueData(double revenue[REPS][MONTHS]) {
    for (int i = 0; i < REPS; i++) {
        cout << "Enter monthly revenue for sales representative " << i + 1 << ": ";
        for (int j = 0; j < MONTHS; j++) {
            cin >> revenue[i][j];
        }
    }
}

double calculateAnnualRevenue(double *revenue) {
    return accumulate(revenue, revenue + MONTHS, 0.0);
}

int findTopPerformer(double annualRevenue[]) {
    return distance(annualRevenue, max_element(annualRevenue, annualRevenue + REPS));
}

void displayAboveAverageMonths(double revenue[REPS][MONTHS], double average[REPS]) {
    string months[MONTHS] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    for (int i = 0; i < REPS; i++) {
        cout << "Rep " << i + 1 << ": [";
        bool first = true;
        for (int j = 0; j < MONTHS; j++) {
            if (revenue[i][j] > average[i]) {
                if (first) first = false;
                else cout << ", ";
                cout << months[j];
            }
        }
        cout << "]" << endl;
    }
}

double calculateTotalRevenue(double revenue[REPS][MONTHS]) {
    double total = 0.0;
    for (int i = 0; i < REPS; i++) {
        total += calculateAnnualRevenue(revenue[i]);
    }
    return total;
}

int main() {
    double revenue[REPS][MONTHS] = {
        {5000, 7000, 6500, 6000, 8000, 7500, 7000, 7200, 6800, 7100, 7400, 7800},
        {6000, 7500, 7000, 6500, 8500, 8000, 7500, 7300, 7000, 7200, 7500, 7900},
        {5500, 7300, 6700, 6200, 8200, 7700, 7200, 7100, 6900, 7200, 7500, 7800},
        {5200, 7100, 6600, 6100, 8000, 7600, 7100, 7000, 6800, 7100, 7400, 7700},
        {5800, 7400, 6800, 6300, 8100, 7800, 7400, 7200, 7100, 7300, 7600, 7900}
    };

    double annualRevenue[REPS];
    double averageRevenue[REPS];

    for (int i = 0; i < REPS; i++) {
        annualRevenue[i] = calculateAnnualRevenue(revenue[i]);
        averageRevenue[i] = annualRevenue[i] / MONTHS;
    }

    cout << "Annual revenue for each sales representative:"<<endl;
    for (int i = 0; i < REPS; i++) {
        cout << "Rep " << i + 1 << ": $" << annualRevenue[i] << endl;
    }

    int topPerformer = findTopPerformer(annualRevenue);
    cout << "\nTop performer: Rep " << topPerformer + 1 << " with $" << annualRevenue[topPerformer] << endl;

    double totalCompanyRevenue = calculateTotalRevenue(revenue);
    cout << "Total company revenue for the year: $" << totalCompanyRevenue << endl;

    cout << "\nMonths with revenue above the average for each representative:" << endl;
    displayAboveAverageMonths(revenue, averageRevenue);

    return 0;
}