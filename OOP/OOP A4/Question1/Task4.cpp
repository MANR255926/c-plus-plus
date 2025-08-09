#include <iostream>
using namespace std;

class PersonalInfo
{
public:
    int bodyWeight;
    int bodyHeight;
    string genderIdentity;
};

class JobDetails
{
public:
    string jobTitle;
    int workingHoursPerDay;
};

class Instructor : public PersonalInfo, public JobDetails
{
public:
    void showDetails()
    {
        cout << "Weight: " << bodyWeight << " Height: " << bodyHeight << " Gender: " << genderIdentity << endl;
        cout << "Designation: " << jobTitle << " Working Hours: " << workingHoursPerDay << endl;
    }
};

int main()
{
    Instructor teacher;
    teacher.bodyWeight = 70;
    teacher.bodyHeight = 170;
    teacher.genderIdentity = "male";
    teacher.jobTitle = "Professor";
    teacher.workingHoursPerDay = 6;
    teacher.showDetails();

    return 0;
}