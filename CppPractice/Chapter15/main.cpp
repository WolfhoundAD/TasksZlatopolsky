#include<iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
  //Chapter 15. Number 15.17.
  //There is a text file containing 20 lines. Rewrite each of its
  //strings into an array in the same order.
  cout << "Chapter 15. Number 15.17." << endl;

  ifstream ifs( "Chap15.txt" );

  if ( !ifs ) return -1;

  const int size = 20;
  string text_file[size];

  for ( int i = 0; i < size && getline( ifs, text_file[i] ); ++i );

  for ( int i = 0; i < size; ++i )
    cout << text_file[i] << endl;

}
