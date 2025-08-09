#include <iostream>
using namespace std;

class Distance
{
  int feet, inches;

public:
  Distance()
  {
    feet = 0;
    inches = 0;
  }

  Distance(int ft, int in)
  {
    feet = ft;
    inches = in;
  }

  friend istream &operator>>(istream &input, Distance &d)
  {
    cout << "Enter feet: ";
    input >> d.feet;
    cout << "Enter inches: ";
    input >> d.inches;
    return input;
  }

  friend ostream &operator<<(ostream &output, Distance d)
  {
    output << d.feet << " ft " << d.inches << " in";
    return output;
  }

  Distance operator+(Distance other)
  {
    Distance result;
    result.feet = feet + other.feet;
    result.inches = inches + other.inches;
    if (result.inches >= 12)
    {
      result.feet += result.inches / 12;
      result.inches %= 12;
    }
    return result;
  }

  Distance operator-(Distance other)
  {
    Distance result;
    result.feet = feet - other.feet;
    result.inches = inches - other.inches;
    if (result.inches < 0)
    {
      result.feet -= 1;
      result.inches += 12;
    }
    return result;
  }

  Distance operator*(int multiplier)
  {
    Distance result;
    result.feet = feet * multiplier;
    result.inches = inches * multiplier;
    if (result.inches >= 12)
    {
      result.feet += result.inches / 12;
      result.inches %= 12;
    }
    return result;
  }

  Distance operator/(int divisor)
  {
    int totalInches = (feet * 12) + inches;
    totalInches /= divisor;
    Distance result;
    result.feet = totalInches / 12;
    result.inches = totalInches % 12;
    return result;
  }

  Distance operator%(int divisor)
  {
    int totalInches = (feet * 12) + inches;
    totalInches %= divisor;
    Distance result;
    result.feet = totalInches / 12;
    result.inches = totalInches % 12;
    return result;
  }
};

int main()
{
  Distance distance1, distance2;
  cout << "Enter first distance:" << endl;
  cin >> distance1;
  cout << "Enter second distance:" << endl;
  cin >> distance2;

  Distance sum = distance1 + distance2;
  Distance difference = distance1 - distance2;
  Distance multiplied = distance1 * 2;
  Distance divided = distance1 / 2;
  Distance modulo = distance1 % 5;

  cout << "\nSum: " << sum << endl;
  cout << "Difference: " << difference << endl;
  cout << "Multiplied by 2: " << multiplied << endl;
  cout << "Divided by 2: " << divided << endl;
  cout << "Modulo 5: " << modulo << endl;

  return 0;
}