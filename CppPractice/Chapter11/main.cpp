#include <iostream>
using namespace std;
int main()
{
  //Chapter 11. Number 11.246.
  // Two arrays of the same size are given. Get a third array, each
  // element of which is equal to:
  // a) the sum of elements with the same number in the given arrays;
  // b) the product of elements with the same number in the given arrays;
  // c) the maximum of the elements with the same number in the given arrays.
  cout << "Chapter 11. Number 11.246." << endl;
  const int iLen = 10;
  const int arr1[iLen] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  const int arr2[iLen] = {4, 3, 3, 4, 5, 6, 7, 8, 9, 11};
  int arr3[iLen];

//a
  for ( size_t i = 0; i < iLen; ++i )
  {
    arr3[i] = arr1[i] + arr2[i];
    cout << arr3[i] << " ";

  }

  cout << endl;

//b
  for ( size_t i = 0; i < iLen; ++i )
  {
    arr3[i] = arr1[i] * arr2[i];
    cout << arr3[i] << " ";
  }

  cout << endl;

//c
  for ( size_t i = 0; i < iLen; ++i )
  {
    arr3[i] = max( arr1[i], arr2[i] );
    cout << arr3[i] << " ";
  }

  cout << endl;

  //Chapter 11. Number 11.97.
  // Find the element closest to the average value of all the elements of the array.
  cout << "Chapter 11. Number 11.97." << endl;

  const int pArr[iLen] = {1, 3, 3, 4, 5, 6, 7, 8, 9, 25};
  int iSum = 0;

  for ( int i = 0; i < iLen; i++ )
    iSum += abs( pArr[i] );

  int iDelta = 0;

  for ( int i = 1; i < iLen; i++ )
    if ( abs( iSum / iLen - abs( pArr[i] ) ) < abs( iSum / iLen - abs( pArr[i - 1] ) ) )
      iDelta = i;

  cout << "delta = " << pArr[iDelta] << endl;

  return 0;
}
