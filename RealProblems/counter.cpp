#include <iostream>
using namespace std;

// Void function to determine grade and print it directly
void Grade(int marks) {
    if (marks >= 85) {
        cout << "A";
    } else if (marks >= 70 && marks <= 84) {
        cout << "B";
    } else if (marks >= 50 && marks <= 69) {
        cout << "C";
    } else {
        cout << "F";
    }
}

int main() {
    const int nStudent = 15;
    int studentMarks[nStudent];
    
    // Input marks for each student
    for (int i = 0; i < nStudent; i++) {
        cout << "Enter marks for student Roll No. " << i + 1 << ": ";
        cin >> studentMarks[i];
    }
    
    // Display the grades of each student
    cout << "Grades for each student:" << endl;
    for (int i = 0; i < nStudent; i++) {
        cout << "Grade of Student with Roll No. " << i + 1 << ": ";
        Grade(studentMarks[i]);  // Call Grade function with one parameter
        cout << endl;
    }
    
    return 0;
}