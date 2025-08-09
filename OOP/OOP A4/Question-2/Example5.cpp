#include <iostream>
using namespace std;

template <class Type>
Type calculateProduct(Type array[], int length)
{
   Type product = 1;
   for (int index = 0; index < length; index++)
      product *= array[index];
   return product;
}

int main()
{
   int integerArray[] = {1, 2, 3, 4};
   cout << "Product = " << calculateProduct(integerArray, 4) << endl;

   float floatArray[] = {1.5f, 2.0f, 2.0f};
   cout << "Product = " << calculateProduct(floatArray, 3) << endl;

   return 0;
}