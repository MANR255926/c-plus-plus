#include <iostream>
using namespace std;

template <class Type>
Type maximum(Type firstValue, Type secondValue)
{
   if (firstValue > secondValue)
      return firstValue;
   else
      return secondValue;
}

int main()
{
   cout << maximum(3, 5) << endl;
   cout << maximum(3.3, 2.2) << endl;
   return 0;
}