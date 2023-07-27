#include <iostream>
using namespace std;

int main()
{
  //Chapter 1. Number 1.58.
  //What temperature on the Celsius scale corresponds to the specified value?
  double tFahrenheit = 450.0;
  double tCelsius = 0.0;
  tCelsius = ( tFahrenheit - 32 ) / 1.8;
  cout << "Chapter 1. Number 1.58." << endl;
  cout << "450 degrees fahrenheit = " << tCelsius << " degrees celsius" << endl;

  //Chapter 1. Number 1.61.
  ////Given a real number a. Using only the multiplication operation, get...
  //a^4
  cout << "Chapter 1. Number 1.61." << endl;
  cout << "a=2, a^4 = ?" << endl;
  int a = 2;
  a *= a;
  a *= a;
  cout << "a^4 = " << a << "\n";

  //a^6
  cout << "a=2, a^6 = ?" << endl;
  int b = 2;
  b = b * b * b;
  b *= b;
  cout << "a^6 = " << b << "\n";

  //a^7
  cout << "a=2, a^7 = ?" << endl;
  int e = 2;
  int f = e * e;
  int c = f * f;
  int d = c * f * e;
  cout << "a^7 = " << d << "\n";

  //a^8
  cout << "a=2, a^8 = ?" << endl;
  int g = 2;
  g *= g;
  g *= g;
  g *= g;
  cout << "a^8 = " << g << "\n";

  //a^9
  cout << "a=2, a^9 = ?" << endl;
  int h = 2;

  for ( int i = 0; i < 2; ++i )
    h *= h;

  h *= h;
  h += h;
  cout << "a^9 = " << h << "\n";

  //a^13
  cout << "a=2, a^13 = ?" << endl;
  int a1 = 2;
  int a2 = a1 * a1;
  int a4 = a2 * a2;
  int a8 = a4 * a4;
  int a13 = a8 * a4 * a1;
  cout << "a^13 = " << a13 << "\n";

  //a^21
  cout << "a=2, a^21 = ?" << endl;
  int an = 2;
  int aTwo = an * an;
  int aF = aTwo * aTwo;
  int aE = aF * aF;
  int a12 = aE * aF;
  int a20 = a12 * aE;
  int a21 = a20 * an;
  cout << "a^21 = " << a21 << "\n";

  //a^64
  cout << "a=2, a^64 = ?" << endl;
  long double x = 2;
  x *= x *= x *= x *= x *= x *= x;
  cout << "a^64 = " << x << "\n";
  return 0;
}
