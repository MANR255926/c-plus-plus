#include <iostream>
using namespace std;

template <typename Type>
Type calculateSquare(Type value)
{
   return value * value;
}

int main()
{
   cout << "Square of 4: " << calculateSquare(4) << endl;
   cout << "Square of 3.14: " << calculateSquare(3.14) << endl;
   return 0;
}