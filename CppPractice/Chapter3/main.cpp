#include <iostream>
using namespace std;

int main()
{
  //Chapter 3. Number 3.3.
  //GCalculate the value of a logical expression for the following values   of logical quantities...
  cout << "Chapter 3. Number 3.3." << endl;
  const bool A = true;
  const bool B = false;
  const bool C = false;
  cout << "A = " << boolalpha << A << ";   B = " << B << ";   C = " << C << ";" << endl;
  cout << "(!A && B) = " << ( !A && B ) << endl;
  cout << "(A || ! B) = " << ( A || ! B ) << endl;
  cout << "(A && (B || C)) = " << ( A && ( B || C ) ) << endl;

  //Chapter 3. Number 3.13.
  //Calculate the value of a logical expression for all possible values of logical quantities A and B:
  cout << endl << "Chapter 3. Number 3.13." << endl;
  bool D = false;
  bool E = false;

  do
  {
    do
    {
      cout << "A = " << boolalpha << D << ";   B = " << E << ";" << endl;
      cout << "!A || !B    = " << ( !D || !E ) << endl;
      cout << "A && (A || !B) = " << ( D && ( D || !E ) ) << endl;
      cout << "(!A || B) && B = " << ( ( !D || E ) && E ) << endl << endl;

      E = !E;

    } while ( E != false ) ;

    D = !D;

  } while ( D != false );

  return 0;
}
