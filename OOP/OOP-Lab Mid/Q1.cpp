#include <iostream>
using namespace std;

class Rectangle
{
    float l;
    float w;

public:
    void setL(float l1, float w1)
    {
        l = l1;
        w = w1;
    }

    void display()
    {
        cout << "Area is = " << l * w << " Perimeter is = " << 2 * (l + w) << endl;
    }
};

int main()
{
    Rectangle obj;
    obj.setL(10, 20);
    obj.display();

    return 0;
}