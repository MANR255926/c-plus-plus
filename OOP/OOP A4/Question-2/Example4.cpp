#include <iostream>
#include <string>
using namespace std;

template <typename Type>
class StringLengthCounter
{
   Type text;

public:
   StringLengthCounter(Type inputText)
   {
      text = inputText;
   }

   void displayLength()
   {
      cout << "Length: " << text.length() << endl;
   }
};

int main()
{
   StringLengthCounter<string> stringCounter("templatefun");
   stringCounter.displayLength();
   return 0;
}