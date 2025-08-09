#include <iostream>
using namespace std;

// without encapsulation: getter and setter methods
class Allyan
{
    string Name;
    int Age;
    float Hight;

public:
    Allyan(int age, float hight, string name)
    {
        Name = name;
        Age = age;
        Hight = hight;
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