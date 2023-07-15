#include <iostream>
using namespace std;
int main()
{
  //Chapter 7. Number 7.37.
  //A sequence of nonzero integers is given. Determine how many times
  //the sign changes in this sequence.
  cout << "Chapter 7. Number 7.37." << endl;
  const int size = 5;
  int array[size] = {-1, -4, -9, -16, 36};
  int num = 1; //'+' the first sign for comparison with the following
  int count = 0;
  int i = 0;
  int temp;
  temp = num;

  for ( int j = 0; j < size; ++j )
  {
    num = array[j];

    if ( ( temp > 0 && num < 0 ) || ( temp < 0 && num > 0 ) )
      count++;

    temp = num;

    i++;
  }

  cout << "The sign has changed " << count << " times" << endl;

  return 0;
}
