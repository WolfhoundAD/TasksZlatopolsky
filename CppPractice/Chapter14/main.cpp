#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
  //Chapter 14. Number 14.59.
  //There are two files of the same size, the elements of which are separate characters.
  //Find out if their elements match. If not, then get the number of the first component in which
  //these files differ from each other.
  cout << "Chapter 14. Number 14.59." << endl;
  string str;
  char c1, c2;
  ofstream f1( "file1.txt" );
  cout << "Enter line 1: " << endl;
  getline( cin, str );
  f1 << str;
  f1.close();
  ofstream f2( "file2.txt" );
  cout << "Enter line 2: " << endl;
  getline( cin, str );
  f2 << str;
  f2.close();

  ifstream f3( "file1.txt" );
  ifstream f4( "file2.txt" );

  ofstream den( "otvet.txt" );
  int i = 0;

  while ( true )
  {
    f3.get( c1 );

    if ( f3.eof() ) break;

    f4.get( c2 );

    if ( c1 != c2 )
    {
      cout << "number: " << i;
      break;
    }

    ++i;
  }

  den << "number: " << i;
  den.close();
  getch();
  return 0;
}
