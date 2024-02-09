#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 42;
void tcase()
{
 int n;cin >> n;
 vector<ll>vec1(n);
 vector<ll>vec2(n);
 for (int i = 0;i < n;i++)
 {
  cin >> vec1[i];
  vec2[i] = vec1[i];
 }
 sort(vec2.begin(), vec2.end());
 for (int i = 0;i < n;i++)
 {
  if (vec1[i] % 2 == vec2[i]%2) continue;
  else
  {
   cout << "NO\n";
   return;
  }
 }
 cout << "YES\n";
 
}
 
int main()
{
    elkhawaga;
 ll t;cin >> t;
 for (int i = 0;i < t;i++) tcase();
}