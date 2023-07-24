#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;
const int n = 50;
int main()
{
  //Chapter 16. Number 16.21.
  //Using a random number sensor, get 50 integers equal to 0
  //or 1, and count the number of ones and the number of zeros..
  cout << "Chapter 16. Number 16.21." << endl;
  int arr[n];
  int one = 0, zero = 0;
  srand( ( unsigned )time( NULL ) );
  cout << "Array: " << endl;

  for ( int i = 0; i < n; i++ )
  {
    arr[i] = rand() % 2;
    cout << arr[i];

    if ( arr[i] == 0 ) zero++;
    else if ( arr[i] == 1 ) one++;
  }

  cout << "\nOnes: " << one << endl;
  cout << "Zeros: " << zero << endl;
  getch();
  return 0;
}
