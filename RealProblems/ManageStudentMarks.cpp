#include <iostream>
using namespace std;
// Function to find the lowest marks
int findMin(int marks[], int size)
{
    int min = marks[0];

    for(int i = 1; i < size; i++)
    {
        if(marks[i] < min)
        {
            min = marks[i];
        }
    }
    return min;
}
int main()
{
    int NUM_STUDENTS = 8;
    int marks[NUM_STUDENTS];
    
    // Input marks for each student
    for(int i = 0; i < NUM_STUDENTS; i++)
    {
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> marks[i];
    }

    // Find and display the lowest marks
    int lowestMarks = findMin(marks, NUM_STUDENTS);
    cout << "Lowest marks in the class: " << lowestMarks << endl;

    return 0;
}