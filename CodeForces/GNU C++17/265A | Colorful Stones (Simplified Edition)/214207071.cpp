#include "bits/stdc++.h"
using namespace std;
 
int main()
{
 string s, t;
 cin >> s >> t;
 int temp = 0;
 for (int i =0;i<t.length();i++)
 {
  if (s[temp] == t[i]) temp++;
 }
 cout << ++temp;
 return 0;
}