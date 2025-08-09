#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;
    string contact;

public:
    Person() : name(""), age(0), contact("") {}
    Person(string n, int a, string c) : name(n), age(a), contact(c) {}
    virtual void displayInfo()
    {
        cout << "Name: " << name << ", Age: " << age << ", Contact: " << contact << endl;
    }
};

class Patient : public Person
{
private:
    int patientId;
    string disease;
    string admitDate;
    string dischargeDate;

public:
    Patient() : Person(), patientId(0), disease(""), admitDate(""), dischargeDate("") {}
    Patient(string n, int a, string c, int id, string d, string ad, string dd)
        : Person(n, a, c), patientId(id), disease(d), admitDate(ad), dischargeDate(dd) {}
    void admit()
    {
        cout << name << " admitted with " << disease << " on " << admitDate << endl;
    }
    void discharge()
    {
        cout << name << " discharged on " << dischargeDate << endl;
    }
    void displayInfo() override
    {
        Person::displayInfo();
        cout << "Patient ID: " << patientId << ", Disease: " << disease << ", Admit: " << admitDate << ", Discharge: " << dischargeDate << endl;
    }
};

class Doctor : public Person
{
private:
    string specialization;
    int doctorId;

public:
    Doctor() : Person(), specialization(""), doctorId(0) {}
    Doctor(string n, int a, string c, int id, string s)
        : Person(n, a, c), doctorId(id), specialization(s) {}
    void treatPatient()
    {
        cout << name << " is treating patients in " << specialization << " department." << endl;
    }
    void displayInfo() override
    {
        Person::displayInfo();
        cout << "Doctor ID: " << doctorId << ", Specialization: " << specialization << endl;
    }
};

class Room
{
private:
    int roomNumber;
    string type;
    bool isOccupied;

public:
    Room() : roomNumber(0), type(""), isOccupied(false) {}
    Room(int r, string t, bool occ) : roomNumber(r), type(t), isOccupied(occ) {}
    void showRoomInfo()
    {
        cout << "Room No: " << roomNumber << ", Type: " << type << ", Occupied: " << (isOccupied ? "Yes" : "No") << endl;
    }
};

class Hospital
{
private:
    Patient patients[100];
    Doctor doctors[50];
    Room rooms[50];
    int patientCount = 0;
    int doctorCount = 0;
    int roomCount = 0;

public:
    void admitPatient(Patient p)
    {
        if (patientCount < 100)
            patients[patientCount++] = p;
    }
    void dischargePatient(int index)
    {
        if (index >= 0 && index < patientCount)
            patients[index].discharge();
    }
    void assignDoctor(Doctor d)
    {
        if (doctorCount < 50)
            doctors[doctorCount++] = d;
    }
    void addRoom(Room r)
    {
        if (roomCount < 50)
            rooms[roomCount++] = r;
    }
    void showAllRecords()
    {
        cout << "\n--- Patients ---\n";
        for (int i = 0; i < patientCount; ++i)
            patients[i].displayInfo();

        cout << "\n--- Doctors ---\n";
        for (int i = 0; i < doctorCount; ++i)
            doctors[i].displayInfo();

        cout << "\n--- Rooms ---\n";
        for (int i = 0; i < roomCount; ++i)
            rooms[i].showRoomInfo();
    }
};

int main()
{
    Hospital hospital;

    hospital.admitPatient(Patient("Ali", 30, "03001234567", 1, "Fever", "01-07-2025", "03-07-2025"));
    hospital.admitPatient(Patient("Sana", 25, "03107654321", 2, "Infection", "01-07-2025", "04-07-2025"));

    hospital.assignDoctor(Doctor("Dr. Khan", 45, "03211223344", 101, "General"));
    hospital.assignDoctor(Doctor("Dr. Asma", 38, "03335557788", 102, "ENT"));

    hospital.addRoom(Room(201, "General Ward", true));
    hospital.addRoom(Room(202, "Private", false));

    hospital.showAllRecords();

    return 0;
}