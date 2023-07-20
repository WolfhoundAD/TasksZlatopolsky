#include <iostream>
#include <ctime>
using namespace std;

struct magazine
{
  int price, circulation;
};

int main()
{
  //Chapter 13. Number 13.26.
  //Data on the price and circulation of each of the 15 magazines are known. Find the average
  //cost of magazines with a circulation of less than 10,000 copies.
  cout << "Chapter 13. Number 13.26." << endl;
  const int n = 15;
  magazine mag[n];
  int sum_price = 0, count = 0;

  for ( int i = 0; i < n; i++ )
  {
    mag[i].price = rand() % 50 + 10;
    mag[i].circulation = rand() % 20000 + 1000;
    cout << "Price " << i + 1 << ": " << mag[i].price << "  Circulation: " << mag[i].circulation << "\n";

    if ( mag[i].circulation < 10000 )
    {
      sum_price += mag[i].price;
      count++;
    }
  }

  double average = sum_price / count;
  cout << "The number of magazines with a circulation of less than 10,000: " << count;
  cout << "\n Average price: " << average << "\n";

  return 0;
}
