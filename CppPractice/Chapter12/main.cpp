#include <iostream>
#include <vector>
using namespace std;
int main()
{
  //Chapter 12. Number 12.23.
  //Fill in a two-dimensional array of size 7x7 as shown in Fig.
  cout << "Chapter 12. Number 12.23." << endl;
  char arr[7][7];
  int i, j;

  for ( i = 0; i < 7; ++i )
  {
    for ( j = 0; j < 7; ++j )
    {
      if ( i == j or i + j == 6 or j == 3 or i == 3 )
        arr[i][j] = '1';
      else
        arr[i][j] = '0';
    }
  }

  for ( i = 0; i < 7; ++i )
  {
    for ( j = 0; j < 7; ++j )
      cout << arr[i][j] << " ";

    cout << endl;
  }

  //Chapter 12. Number 12.241.
  //A two-dimensional array is given. Insert into it:
  //a string of numbers 100 after the string with the number s;
  cout << "Chapter 12. Number 12.241." << endl;
  vector<vector<int>> array =
  {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  int s = 1; //The number of the line after which the new line will be inserted

  vector<int> newRow( array[0].size(), 100 );
  array.insert( array.begin() + s + 1, newRow );

  for ( const auto& row : array )
  {
    for ( int num : row )
      cout << num << " ";

    cout << std::endl;
  }

  return 0;
}
