#include <iostream>
using namespace std;

class Dimensions
{
public:
    int height;
    int width;
};

class Appearance
{
public:
    string colorName;
};

class ColoredRectangle : public Dimensions, public Appearance
{
public:
    int calculateArea()
    {
        return height * width;
    }

    void displayDetails()
    {
        cout << "Color: " << colorName << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main()
{
    ColoredRectangle rectangle;
    rectangle.height = 10;
    rectangle.width = 5;
    rectangle.colorName = "red";
    rectangle.displayDetails();

    return 0;
}