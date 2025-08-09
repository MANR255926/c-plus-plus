#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    string contact;

public:
    Person() : name(""), contact("") {}
    Person(string n, string c) : name(n), contact(c) {}
    virtual void displayInfo()
    {
        cout << "Name: " << name << ", Contact: " << contact << endl;
    }
};

class Guest : public Person
{
private:
    int roomNumber;
    string checkInDate;
    string checkOutDate;

public:
    Guest() : Person(), roomNumber(0), checkInDate(""), checkOutDate("") {}
    Guest(string n, string c, int r, string in, string out)
        : Person(n, c), roomNumber(r), checkInDate(in), checkOutDate(out) {}

    void bookRoom()
    {
        cout << name << " booked room " << roomNumber << " on " << checkInDate << endl;
    }

    void checkout()
    {
        cout << name << " checked out from room " << roomNumber << " on " << checkOutDate << endl;
    }

    void displayInfo() override
    {
        Person::displayInfo();
        cout << "Room No: " << roomNumber << ", Check-in: " << checkInDate
             << ", Check-out: " << checkOutDate << endl;
    }
};

class Room
{
public:
    int roomNumber;
    string type;
    float price;
    bool isAvailable;

    Room() : roomNumber(0), type(""), price(0.0), isAvailable(true) {}
    Room(int r, string t, float p) : roomNumber(r), type(t), price(p), isAvailable(true) {}

    void showRoomInfo()
    {
        cout << "Room No: " << roomNumber << ", Type: " << type
             << ", Price: Rs." << price << ", Available: " << (isAvailable ? "Yes" : "No") << endl;
    }
};

class Hotel
{
private:
    Room rooms[100];
    Guest guests[100];
    int roomCount = 0;
    int guestCount = 0;

public:
    void addRoom(Room r)
    {
        if (roomCount < 100)
            rooms[roomCount++] = r;
    }

    void bookRoom(Guest g)
    {
        if (guestCount < 100)
            guests[guestCount++] = g;
    }

    void checkoutGuest(int index)
    {
        if (index >= 0 && index < guestCount)
            guests[index].checkout();
    }

    void showStatus()
    {
        cout << "\n--- Rooms ---\n";
        for (int i = 0; i < roomCount; ++i)
            rooms[i].showRoomInfo();

        cout << "\n--- Guests ---\n";
        for (int i = 0; i < guestCount; ++i)
            guests[i].displayInfo();
    }
};

int main()
{
    Hotel hotel;

    hotel.addRoom(Room(101, "Single", 3000));
    hotel.addRoom(Room(102, "Double", 5000));

    hotel.bookRoom(Guest("Hamza", "03001234567", 101, "01-07-2025", "03-07-2025"));
    hotel.bookRoom(Guest("Ayesha", "03107654321", 102, "01-07-2025", "04-07-2025"));

    hotel.showStatus();

    return 0;
}