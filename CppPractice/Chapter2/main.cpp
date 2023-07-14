#include <iostream>
using namespace std;

int main()
{
//Chapter 2. Number 2.23.
//Given a natural number n (n > 999). Find: a) the number of hundreds in it; b) the number of thousands in it.
  cout << "Chapter 2. Number 2.23." << endl;
  const int N = 123445;
  const int hundreds = N / 100 % 10;
  const int thousands = N / 1000 % 10;
  cout << "Hundreds: " << hundreds << endl;
  cout << "Thousands: " << thousands << endl;

//Chapter 2. Number 2.34.
//The digits of two integers are given: two—digit 2 1 a a and one—digit b, where 1a is the number of ones,
//2 a is the number of tens. Get the digits of a number equal to the sum of the given numbers
//(it is known that this number is two-digit).
  cout << "Chapter 2. Number 2.34." << endl;
  int a1 = 3, a2 = 5, b = 6, c1, c2;
  c2 = a2 + ( a1 + b ) / 10;
  c1 = ( a1 + b ) % 10;
  cout << "Result: " << c2 << c1 << endl;

  return 0;
}
