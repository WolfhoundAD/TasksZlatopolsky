#include <iostream>

using namespace std;

int main()
{
  //Chapter 5. Number 5.94.
  //A six-digit number is given. Find the sum of its digits. Do not use values to store
  //all six digits of a number.
  cout << "Chapter 5. Number 5.94." << endl;
  int n = 123456;
  int sum = 0;

  while ( n > 0 )
  {
    sum += n % 10;
    n /= 10;
  }

  cout << "The sum of the number = " << sum << endl;
  return 0;
}
