#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;    /*A function have only one return statement.
    Or we can use more by using conditions, like :

    if (condition)
    {
    return statement;
    }
    else
    {
    return statement;
    } */
}

void loop() //void type of function does not need return statement to return value
{
    for(int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }
    // return;  if we add this statement it will return an error
}

int main()
{
    int a,b;
    
    loop(); // call the function loop()

    cout << endl;

    cout << "Enter integers: ";
    cin >> a ;
    cout << "Enter integers: ";
    cin >> b;

    int sum = add(a,b);
    cout << "The sum is: " << sum << endl;
}