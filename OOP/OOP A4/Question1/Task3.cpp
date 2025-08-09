#include <iostream>
using namespace std;

class Individual
{
public:
    string fullName;

    Individual()
    {
        cout << "Default Individual\n";
    }

    Individual(const Individual &other)
    {
        cout << "Copied Individual\n";
        fullName = other.fullName;
    }
};

class Learner : public Individual
{
private:
    int registrationNumber;

public:
    Learner()
    {
        cout << "Default Learner\n";
    }

    Learner(const Learner &other) : Individual(other)
    {
        cout << "Copied Learner\n";
        registrationNumber = other.registrationNumber;
    }
};

int main()
{
    Learner learnerOne;
    learnerOne.fullName = "Ali";

    Learner learnerTwo = learnerOne;

    return 0;
}