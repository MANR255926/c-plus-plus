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

class Librarian : public Person
{
public:
    Librarian() : Person() {}
    Librarian(string n, int i) : Person(n, i) {}
    void manageBooks()
    {
        cout << name << " is managing books." << endl;
    }
    void issueBook()
    {
        cout << name << " is issuing a book." << endl;
    }
};

class Member : public Person
{
private:
    int membershipId;

public:
    Member() : Person(), membershipId(0) {}
    Member(string n, int i, int mId) : Person(n, i), membershipId(mId) {}
    void borrowBook()
    {
        cout << name << " is borrowing a book." << endl;
    }
    void returnBook()
    {
        cout << name << " is returning a book." << endl;
    }
    void displayInfo() override
    {
        cout << "Member Name: " << name << ", ID: " << id << ", Membership ID: " << membershipId << endl;
    }
};

class Book
{
public:
    string title;
    string author;
    string isbn;
    bool available;

    Book() : title(""), author(""), isbn(""), available(true) {}
    Book(string t, string a, string i) : title(t), author(a), isbn(i), available(true) {}

    void displayDetails()
    {
        cout << "Title: " << title << ", Author: " << author
             << ", ISBN: " << isbn << ", Available: " << (available ? "Yes" : "No") << endl;
    }
};

class Library
{
public:
    Book books[100];
    Member members[100];
    int bookCount = 0;
    int memberCount = 0;

    void addSampleData()
    {
        books[bookCount++] = Book("1984", "George Orwell", "1234567890");
        books[bookCount++] = Book("Brave New World", "Aldous Huxley", "0987654321");
        members[memberCount++] = Member("Alice", 1, 1001);
        members[memberCount++] = Member("Bob", 2, 1002);
    }

    void displayBooks()
    {
        for (int i = 0; i < bookCount; ++i)
            books[i].displayDetails();
    }

    void displayMembers()
    {
        for (int i = 0; i < memberCount; ++i)
            members[i].displayInfo();
    }
};

int main()
{
    Library lib;
    lib.addSampleData();

    cout << "--- Library Books ---" << endl;
    lib.displayBooks();

    cout << "\n--- Library Members ---" << endl;
    lib.displayMembers();

    Librarian librarian("Mr. John", 101);
    librarian.manageBooks();
    librarian.issueBook();

    return 0;
}