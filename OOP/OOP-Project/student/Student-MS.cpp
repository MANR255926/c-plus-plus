// student_management.cpp
#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int id;

public:
    Person() : name(""), id(0) {}
    Person(string n, int i) : name(n), id(i) {}
    virtual void displayInfo()
    {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

class Student : public Person
{
private:
    int rollNumber;
    string program;
    int semester;

public:
    Student() : Person(), rollNumber(0), program(""), semester(0) {}
    Student(string n, int i, int r, string p, int s) : Person(n, i), rollNumber(r), program(p), semester(s) {}
    void showAcademicInfo()
    {
        cout << "Roll No: " << rollNumber << ", Program: " << program << ", Semester: " << semester << endl;
    }
    void displayInfo() override
    {
        Person::displayInfo();
        showAcademicInfo();
    }
};

class Teacher : public Person
{
private:
    string subject;
    string department;

public:
    Teacher() : Person(), subject(""), department("") {}
    Teacher(string n, int i, string s, string d) : Person(n, i), subject(s), department(d) {}
    void showTeachingInfo()
    {
        cout << "Subject: " << subject << ", Department: " << department << endl;
    }
    void displayInfo() override
    {
        Person::displayInfo();
        showTeachingInfo();
    }
};

class Course
{
private:
    string courseCode;
    string title;
    int creditHours;

public:
    Course() : courseCode(""), title(""), creditHours(0) {}
    Course(string c, string t, int ch) : courseCode(c), title(t), creditHours(ch) {}
    void showCourseInfo()
    {
        cout << "Course: " << title << " (" << courseCode << ") - " << creditHours << " Credit Hours" << endl;
    }
};

class StudentManagement
{
private:
    Student students[100];
    Teacher teachers[50];
    Course courses[50];
    int studentCount = 0;
    int teacherCount = 0;
    int courseCount = 0;

public:
    void enrollStudent(Student s)
    {
        if (studentCount < 100)
            students[studentCount++] = s;
    }
    void assignTeacher(Teacher t)
    {
        if (teacherCount < 50)
            teachers[teacherCount++] = t;
    }
    void addCourse(Course c)
    {
        if (courseCount < 50)
            courses[courseCount++] = c;
    }
    void showAll()
    {
        cout << "\n--- Students ---\n";
        for (int i = 0; i < studentCount; ++i)
            students[i].displayInfo();

        cout << "\n--- Teachers ---\n";
        for (int i = 0; i < teacherCount; ++i)
            teachers[i].displayInfo();

        cout << "\n--- Courses ---\n";
        for (int i = 0; i < courseCount; ++i)
            courses[i].showCourseInfo();
    }
};

int main()
{
    StudentManagement sm;

    sm.enrollStudent(Student("Ali", 1, 1001, "BSCS", 5));
    sm.enrollStudent(Student("Sara", 2, 1002, "BSIT", 3));

    sm.assignTeacher(Teacher("Dr. Ahmed", 101, "Programming", "CS"));
    sm.assignTeacher(Teacher("Ms. Fatima", 102, "Database", "IT"));

    sm.addCourse(Course("CS101", "Intro to CS", 3));
    sm.addCourse(Course("IT202", "Database Systems", 4));

    sm.showAll();

    return 0;
}