#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 string w, ans = "hello";
 cin >> w;
 int j = 0;
 for (int i = 0;i < w.length();i++)
 {
  if (w[i] == ans[j])
  {
   j++;
  }
  if (j == 5)
  {
   cout << "YES\n";
   return 0;
  }
 }
 cout << "NO\n";
 
}