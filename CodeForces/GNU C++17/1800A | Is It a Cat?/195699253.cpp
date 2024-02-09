#include "bits/stdc++.h"
using namespace std;
int main()
{
 int t;
 cin >> t;
 //vector<char>vec(4);
 while (t--)
 {
  int n;
  string w,ans="";
  bool flag1 = true;
  bool flag2 = true;
  bool flag3 = true;
  bool flag4 = true;
  cin >> n;
  cin >> w;
  set<char>s1;
  set<char>s2;
  set<char>s3;
  set<char>s4;
  for (int i = 0;i < n;i++) w[i] = tolower(w[i]);
  int e = w.find("e");
  int o = w.find("o");
  int w1 = w.find("w");
  for (int i = 0;i < e;i++) s1.insert(w[i]);
  for (int i = e;i < o;i++) s2.insert(w[i]);
  for (int i = o;i < w1;i++) s3.insert(w[i]);
  for (int i = w1;i < n;i++) s4.insert(w[i]);
  //cout << *s1.begin()<<"  ";
  if (s1.size() == 1 && s2.size() == 1 && s3.size() == 1 && s4.size() == 1 && *s1.begin() == 'm' && *s2.begin() == 'e' && *s3.begin() == 'o' && *s4.begin() == 'w') cout << "YES\n";
  else cout << "NO\n";
 }
}
 
 
 