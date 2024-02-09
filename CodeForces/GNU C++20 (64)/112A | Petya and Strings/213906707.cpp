#include "bits/stdc++.h"
using namespace std;
 
int main()
{
 string word1, word2;
 cin >> word1 >> word2;
 for (int i = 0;i < word1.length();i++)
 {
  word1[i] = towlower(word1[i]);
  word2[i] = towlower(word2[i]);
 }
 if (word1 < word2) cout << "-1";
 else if (word1 > word2) cout << "1";
 else cout << "0";
 return 0;
}
 