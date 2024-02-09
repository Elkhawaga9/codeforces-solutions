#include <iostream>
#include"algorithm"
#include"string"
#include<vector>
using namespace std;
 
//FBFFBFFBFB
int main()
{
 int t;
 cin >> t;
 string checker = "";
 for (int i = 0;i < 18;i++) checker += "Yes";
 while (t--)
 {
  bool flag = false;
  string s;
  cin >> s;
  if (checker.find(s) != string::npos) flag = true;
  if (flag) cout << "YES\n";
  else cout << "NO\n";
 }
}