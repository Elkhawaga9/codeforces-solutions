#include "bits/stdc++.h"
using namespace std;
int main()
{
 int n;
 cin >> n;
 while (n--)
 {
  int t;
  cin >> t;
  int arr[51];
  string word;
  cin >> word;
  int x = 0,y = 0;
  bool flag = false;
  for (auto i : word)
  {
   if (i == 'U') y += 1;
   else if (i == 'D') y -= 1;
   else if (i == 'R') x += 1;
   else x -= 1;
   if (x == 1 && y == 1)
   {
    flag = true;
   }
  }
  if (flag == true) cout << "YES\n";
  else cout << "NO\n";
 }
 return 0;
}
 
 
 
 