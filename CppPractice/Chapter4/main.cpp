#include <iostream>
using namespace std;

int main()
{
  //Chapter 4. Number 4.72.
  //Three different real numbers are given. Without using the full conditional operator, determine:
  //a) the largest of them;
  //b) the smallest of them.
  cout << "Chapter 4. Number 4.72." << endl;
  const int element1 = 3, element2 = 2, element3 = 8;
  int max;
  int min;

  if ( ( element1 >= element2 ) && ( element1 >= element3 ) )
    max = element1;

  if ( ( element2 >= element1 ) && ( element2 >= element3 ) )
    max = element2;

  if ( ( element3 >= element1 ) && ( element3 >= element2 ) )
    max = element3;

  cout << "The largest of them: " << max << endl;

  if ( ( element1 <= element2 ) && ( element1 <= element3 ) )
    min = element1;

  if ( ( element2 <= element1 ) && ( element2 <= element3 ) )
    min = element2;

  if ( ( element3 <= element1 ) && ( element3 <= element2 ) )
    min = element3;

  cout << "The smallest of them: " << min << endl;

  return 0;
}
