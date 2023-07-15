#include <iostream>

using namespace std;
//Chapter 8. Number 8.46.
//Given n natural numbers. Find their greatest common divisor using Euclid's algorithm
//Euclid's algorithm
int nod( int n, int m )
{
  if ( m == 0 )
    return n;

  if ( n > m )
    return nod( m, n - m );
  else
    return nod( n, m - n );
}

int main()
{
  cout << "Chapter 8. Number 8.46." << endl;
  const int n = 4;
  int nod_;
  int arr[n] = {25, 50, 75, 100};

  if ( n >= 2 )
    nod_ = nod( arr[0], arr[1] );

  else
    nod_ = arr[0];

  for ( int i = 2 ; i < n ; i++ )
    nod_ = nod( nod_, arr[i] );

  cout << "NOD = " << nod_ << endl;

  return 0;
}
