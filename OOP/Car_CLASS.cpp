#include <iostream>

using namespace std;

class car
{
public:
    string car_name;
    string car_type;
    int car_price;
    int car_CC;

    car(string n, int p, int c, string t) // construct
    {
        car_name = n;
        car_price = p;
        car_type = t;
        car_CC = c;
    }
};

void print(car c)
{
    cout << endl
         << c.car_name << " " << c.car_type << " " << c.car_CC << " " << c.car_price << endl;
}

int main()
{
    string name, type;
    int price, cc;
    cout << "Enter Name of your car : ";
    cin >> name;
    cout << "\nEnter Type of your car : ";
    cin >> type;
    cout << "\nEnter Price of your car : ";
    cin >> price;
    cout << "\nEnter CC of your car : ";
    cin >> cc;
    car c(name, price, cc, type);
    // car c("Toyota",1200000,18000,"Van");
    print(c);
}