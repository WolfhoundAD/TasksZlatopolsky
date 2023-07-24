#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
  //Chapter 17. Number 17.14.
  //The height of 18 people is known. Determine the arithmetic mean of the growth of
  //those two people who would be in the middle of the line if it was built by ranking.
  std::cout << "Chapter 17. Number 17.14." << std::endl;
  std::vector<int> heights = {199, 195, 190, 172, 175, 177, 178, 180, 182, 183, 188, 187, 190, 192, 195, 200, 205, 210};

  std::sort( heights.begin(), heights.end() );

  int middleIndex1 = heights.size() / 2 - 1;
  int middleIndex2 = heights.size() / 2;

  double averageHeight = ( heights[middleIndex1] + heights[middleIndex2] ) / 2.0;

  std::cout << "srm: " << averageHeight << std::endl;

  return 0;
}
