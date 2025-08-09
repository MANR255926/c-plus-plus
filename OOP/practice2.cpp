#include <iostream>
using namespace std;

// without encapsulation: getter and setter methods
class Allyan
{
    string Name;
    int Age;
    float Hight;

public:
    Allyan(int Age, float Hight, string Name)
    {
        // if we want to use the same name for parameters and class members,
        //  we can use the 'this' pointer to differentiate them
        //  'this' pointer refers to the current object of the class
        //  using this pointer(->) to refer to the current object
        //  and avoid confusion with parameters
        this->Name = Name;
        this->Age = Age;
        this->Hight = Hight;
    }

    void display()
    {
        cout << "name: " << Name << "\nAge: " << Age << "\nhight: " << Hight;
    }
};

int main()
{
    Allyan obj1(20, 5.3, "M.Allyan");
    obj1.display();
}