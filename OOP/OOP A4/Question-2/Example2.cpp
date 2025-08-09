#include <iostream>
using namespace std;

template <typename Type>
void swapValues(Type &firstValue, Type &secondValue)
{
   Type temporary = firstValue;
   firstValue = secondValue;
   secondValue = temporary;
}

int main()
{
   int integerOne = 1, integerTwo = 2;
   swapValues(integerOne, integerTwo);
   cout << integerOne << " " << integerTwo << endl;

   float floatOne = 1.1f, floatTwo = 2.2f;
   swapValues(floatOne, floatTwo);
   cout << floatOne << " " << floatTwo << endl;

   return 0;
}