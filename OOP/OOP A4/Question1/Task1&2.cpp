#include <iostream>
using namespace std;

class BaseA
{
public:
    BaseA() { cout << "Default Constructor BaseA\n"; }
    BaseA(int value) { cout << "Overloaded Constructor BaseA\n"; }
    ~BaseA() { cout << "Destructor BaseA\n"; }
};

class DerivedB : public BaseA
{
public:
    DerivedB() { cout << "Default Constructor DerivedB\n"; }
    DerivedB(int value) : BaseA(value) { cout << "Overloaded Constructor DerivedB\n"; }
    ~DerivedB() { cout << "Destructor DerivedB\n"; }
};

class DerivedC : public DerivedB
{
public:
    DerivedC() { cout << "Default Constructor DerivedC\n"; }
    DerivedC(int value) : DerivedB(value) { cout << "Overloaded Constructor DerivedC\n"; }
    ~DerivedC() { cout << "Destructor DerivedC\n"; }
};

class BaseE
{
public:
    BaseE() { cout << "Default Constructor BaseE\n"; }
    BaseE(int value) { cout << "Overloaded Constructor BaseE\n"; }
    ~BaseE() { cout << "Destructor BaseE\n"; }
};

class DerivedD : public BaseE
{
public:
    DerivedD() { cout << "Default Constructor DerivedD\n"; }
    DerivedD(int value) : BaseE(value) { cout << "Overloaded Constructor DerivedD\n"; }
    ~DerivedD() { cout << "Destructor DerivedD\n"; }
};

int main()
{
    cout << "Testing DerivedC:\n";
    DerivedC objectC1;

    cout << "Testing DerivedD:\n";
    DerivedD objectD1;

    cout << "Testing Overloaded Constructors:\n";
    DerivedC objectC2(5);
    DerivedD objectD2(10);

    return 0;
}