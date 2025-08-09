#include <iostream>
using namespace std;

class PersonalAttributes
{
public:
    int bodyWeight;
    int bodyHeight;
    string genderIdentity;

    void sitDown()
    {
        cout << "Person sitting...\n";
    }
};

class AcademicProfile : public PersonalAttributes
{
public:
    int studentID;
    string firstName;
    string lastName;
    string graduationStatus;

    void printStudentDetails()
    {
        cout << "Student Details...\n";
    }
};

class GraduateStudent : public AcademicProfile
{
public:
    string universityName;
    int graduationYear;

    void showAllInformation()
    {
        cout << "All data shown\n";
    }
};

int main()
{
    GraduateStudent graduate;
    graduate.showAllInformation();
    return 0;
}