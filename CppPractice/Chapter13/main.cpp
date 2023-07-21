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
  const int magazine_amount = 15;
  const int quantity = 10000;
  magazine mag[magazine_amount];
  int sum_price = 0, count = 0;
  const pair<int, int> price_range = {10, 50};
  const pair<int, int> circulation_range = {1000, 20000};
  srand( time( NULL ) );

  for ( int i = 0; i < magazine_amount; i++ )
  {
    mag[i].price = rand() % ( price_range.second - price_range.first + 1 ) + price_range.first;
    mag[i].circulation = rand() % ( circulation_range.second - circulation_range.first + 1 ) + circulation_range.first;
    cout << "Price " << i + 1 << ": " << mag[i].price << "  Circulation: " << mag[i].circulation << "\n";

    if ( mag[i].circulation < quantity )
    {
      sum_price += mag[i].price;
      count++;
    }
  }

  double average = sum_price / count;
  cout << "The number of magazines with a circulation of less than " << quantity << ": " << count;
  cout << "\n Average price: " << average << "\n";

  return 0;
}
