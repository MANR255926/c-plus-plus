#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    string cnic;
    string contact;

public:
    Person() : name(""), cnic(""), contact("") {}
    Person(string n, string c, string ct) : name(n), cnic(c), contact(ct) {}
    virtual void displayInfo()
    {
        cout << "Name: " << name << ", CNIC: " << cnic << ", Contact: " << contact << endl;
    }
};

class Citizen : public Person
{
private:
    string address;
    string dateOfBirth;

public:
    Citizen() : Person(), address(""), dateOfBirth("") {}
    Citizen(string n, string c, string ct, string a, string dob)
        : Person(n, c, ct), address(a), dateOfBirth(dob) {}

    void applyForService()
    {
        cout << name << " applied for a government service." << endl;
    }

    void displayInfo() override
    {
        Person::displayInfo();
        cout << "Address: " << address << ", DOB: " << dateOfBirth << endl;
    }
};

class Service
{
private:
    int serviceId;
    string serviceName;
    string status;

public:
    Service() : serviceId(0), serviceName(""), status("Pending") {}
    Service(int id, string name, string s) : serviceId(id), serviceName(name), status(s) {}

    void showServiceDetails()
    {
        cout << "Service ID: " << serviceId << ", Name: " << serviceName << ", Status: " << status << endl;
    }
};

class GovernmentPortal
{
private:
    Citizen citizens[100];
    Service services[100];
    int citizenCount = 0;
    int serviceCount = 0;

public:
    void registerCitizen(Citizen c)
    {
        if (citizenCount < 100)
            citizens[citizenCount++] = c;
    }
    void requestService(Service s)
    {
        if (serviceCount < 100)
            services[serviceCount++] = s;
    }
    void showPortalStatus()
    {
        cout << "\n--- Registered Citizens ---\n";
        for (int i = 0; i < citizenCount; ++i)
            citizens[i].displayInfo();

        cout << "\n--- Requested Services ---\n";
        for (int i = 0; i < serviceCount; ++i)
            services[i].showServiceDetails();
    }
};

int main()
{
    GovernmentPortal portal;

    portal.registerCitizen(Citizen("Ahmed", "35201-1234567-1", "03001234567", "Lahore", "01-01-1990"));
    portal.registerCitizen(Citizen("Zainab", "35202-7654321-0", "03107654321", "Karachi", "05-05-1992"));

    portal.requestService(Service(1, "CNIC Renewal", "In Progress"));
    portal.requestService(Service(2, "Passport Application", "Pending"));

    portal.showPortalStatus();

    return 0;
}
