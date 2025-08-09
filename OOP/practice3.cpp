#include <iostream>
using namespace std;

class Library
{
protected:
    string name = "Allyan";
    string location = "195-M";
};

class Book : public Library
{
public:
    string title = "Namal";

    virtual void show()
    {
        cout <<"Book Name: "<< title <<"\nFrom library: "<< name<<"\nlocation: "<< location;
    }
};

class Librarian : public Library
{
    protected:
    string librarian_name ;
    string librarian_id ;
    
    public:
    Librarian(){}//def constructor
    void name(int id, string name)
    {
        librarian_name = name;
        librarian_id = id;
    }
    void show()
    {
        cout<<"\nlibrarian name: "<<librarian_name<<"\nlibrarian id: "<<librarian_id;
    }

};

int main()
{
    Book obj;
    obj.show();
    Librarian lib;
    lib.name(101, "Ali");
    lib.show();
}