#include <iostream>
using namespace std;

void bubbleSort( int arr[], int iLen )
{
  for ( int q = 0; q < iLen - 1; q++ )
  {
    for ( int j = 0; j < iLen - q - 1; j++ )
    {
      if ( arr[j] > arr[j + 1] )
      {

        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

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
  const int arr1[iLen] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 7};
  const int arr2[iLen] = {4, 3, 3, 9, 5, 6, 7, 8, 9, 1};
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

  int pArr[iLen] = {10, 3, 15, 4, 5, 6, 27, 11, 9, 25};
  bubbleSort( pArr, iLen );

  int iSum = 0;

  for ( int i = 0; i < iLen; ++i )
    iSum += abs( pArr[i] );

  int iDelta = 0;

  for ( int i = 1; i < iLen; ++i )
    if ( abs( iSum / iLen - abs( pArr[i] ) ) < abs( iSum / iLen - abs( pArr[i - 1] ) ) )
      iDelta = i;

  cout << "delta = " << pArr[iDelta] << endl;

  return 0;
}
