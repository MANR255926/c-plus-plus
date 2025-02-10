#include <iostream>
using namespace std;

int calculateTotalMarks(int marks[], int size)
{
    int total = 0;
    for(int i = 0; i < size; i++)
    {
        total += marks[i];
    }
    return total;
}

int main()
{
    int no_student = 0;
    cout << "Enter the number of students: ";
    cin >> no_student;
    
    int marks[no_student];
    cout << "Enter the marks of each student: ";
    for(int i = 0; i < no_student; i++)
    {
        cin >> marks[i];
    }
    
    int total_marks = calculateTotalMarks(marks, no_student);
    cout << "Total marks of the class: " << total_marks << endl;
    
    return 0;
}