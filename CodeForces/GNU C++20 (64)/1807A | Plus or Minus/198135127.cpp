#include "bits/stdc++.h"
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 ll t;
 cin >> t;
 for (int i = 0;i < t;i++)
 {
  int a, b, c;
  cin >> a >> b >> c;
  if (a + b == c) cout << "+\n";
  else cout << "-\n";
 }
}