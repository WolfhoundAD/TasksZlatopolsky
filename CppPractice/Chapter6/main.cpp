#include <iostream>

using namespace std;

int main()
{
  //Chapter 6. Number 6.8.
  //The number n is given. From numbers 1, 4, 9, 16, 25, ... print those that do not exceed n.
  cout << "Chapter 6. Number 6.8." << endl;
  const int size = 10;
  int array[size] = {1, 4, 9, 16, 36, 49, 64, 81, 100, 121};
  int n = 49;
  int counter = 0;

  cout << "Result:" << endl;

  while ( true )
  {

    if ( array[counter] < n )
      cout << array[counter] << endl;

    counter++;

    if ( counter == size )
      break;
  }

  //Chapter 6. Number 6.85.
  //Given a natural number. If there are numbers 2 and 5 in it, then determine which of
  // them is located in the number to the left. If one or both of these digits occur
  // several times in the number, then the leftmost of the same digits must be taken into account
  cout << "Chapter 6. Number 6.85." << endl;

  int num = 52452;
  int flag = 0;

  while ( true )
  {
    int remains = num % 10;

    switch ( remains )
    {
      case 2:
        flag = 2;
        break;

      case 5:
        flag = 5;
        break;
    }

    num /= 10;

    if ( num == 0 )
      break;
  }

  if ( flag == 2 )
    cout << "2 left" << endl;
  else if ( flag == 5 )
    cout << "5 left" << endl;
  else if ( flag == 0 )
    cout << "The necessary numbers are missing" << endl;

  return 0;
}
