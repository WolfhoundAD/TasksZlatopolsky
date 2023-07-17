#include <iostream>

using namespace std;
int main()
{
  //Chapter 9. Number 9.64.
  //A suggestion is given. Determine how many identical adjacent letters there are in it.
  cout << "Chapter 9. Number 9.64." << endl;

  int repeat = 0;
  cout << "in the sentence: ";
  string s{"EEveryone hhas onnes ownn path."};

  for ( int i = 0; i < s.length(); i++ )
  {
    cout << s[i];

    if ( s[i] == s[i + 1] )
      repeat++;
  }

  cout << "\n Number of repeated adjacent letters = " << repeat << endl;

  //Chapter 9. Number 9.162.
  //Three words are given. Print their common letters. Duplicate letters of each word are not considered.
  cout << "Chapter 9. Number 9.162." << endl;
  const size_t n = 25;
  char word1[n], word2[n], word3[n];

  cout << "first word: ";
  cin >> word1;
  cout << "second word: ";
  cin >> word2;
  cout << "third word: ";
  cin >> word3;
  char result[n] = {'\0'};

  for ( size_t i = 0, j = 0; word1[i]; ++i )
    if ( strchr( word2, word1[i] ) && strchr( word3, word1[i] ) )
      if ( !strchr( result, word1[i] ) )
        result[j++] = word1[i];

  cout << result << "\n";
  return 0;
}
