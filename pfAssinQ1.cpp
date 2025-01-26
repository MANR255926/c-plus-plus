#include <iostream>
using namespace std;

// Function to calculate average marks for a student
float calculateAverage(int marks[], int numSubjects)
{
    float sum = 0;

    for (int i = 0; i < numSubjects; i++)
    {
        sum += marks[i];
    }
    return sum / numSubjects;
}

// Function to determine grade based on average marks

char determineGrade(float average)
{
    if (average >= 85) 
    {
        return 'A';
    } 
    else if (average >= 70) 
    {
        return 'B';
    } 
    else if (average >= 50) 
    {
        return 'C';
    } 
    else 
    {
        return 'F';
    }
}

// Main function
int main()
{
    int numStudents = 5;
    int numSubjects = 3;

    string studentNames[5];
    int studentMarks[5][3];

    // Input student information
    for (int i = 0; i < numStudents; i++)
    {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> studentNames[i];

        for (int j = 0; j < numSubjects; j++)
        {
            cout << "Enter marks for 3 subjects out of 100 : ";
            cin >> studentMarks[i][j];
            cout << endl;
        }
    }

    // Display student report
    cout << "\n\t\tStudent Report:\n";
    cout << "Name            Marks           Average    Grade\n";
    cout << "---------------------------------------------\n";

    for (int i = 0; i < numStudents; i++)
    {
        float average = calculateAverage(studentMarks[i], numSubjects);
        char grade = determineGrade(average);

        cout << studentNames[i];
        int nameLength = studentNames[i].length();
        for (int j = 0; j < 15 - nameLength; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < numSubjects; j++)
        {
            cout << studentMarks[i][j] << " ";
        }
        for (int j = 0; j < 14 - numSubjects * 3; j++)
        {
            cout << " ";
        }

        cout << average << "       " << grade << endl;
    }

    return 0;
}