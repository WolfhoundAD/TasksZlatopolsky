#include <iostream>
using namespace std;
bool Equal( const char* s, const int i, const int j )
{
  return j <= i || ( s[i] == s[j] && Equal( s, i + 1, j - 1 ) );
}

int main()
{
  //Chapter 10. Number 10.57.
  //Write a recursive function that determines whether the part of the string s is symmetric,
  //starting with the ith element and ending with the jth.
  cout << "Chapter 10. Number 10.57." << endl;
  cout << boolalpha << Equal( "akdka", 0, 4 ) << endl;
}
