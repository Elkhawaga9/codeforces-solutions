#include "bits/stdc++.h"
using namespace std;
int main()
{
 //int c;
 string s;
 getline(cin, s);
 set <char> word;
 for (auto i : s) 
 {
  if (i != '{' && i != '}' && i != ','&&i!=' ')
  {
   word.insert(i);
  }
 
 }
 //for (auto k : word) cout << k<<"\n";
 cout << word.size();
 return 0;
}