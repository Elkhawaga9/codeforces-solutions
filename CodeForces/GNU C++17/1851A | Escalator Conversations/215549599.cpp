#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 42;
void tcase()
{
 int n, m, k, h;
 cin >> n >> m >> k >> h;
 //vector<ll>vec(n);
 int ans = 0;
 for (int i = 0;i < n;i++)
 {
  int temp;cin >> temp;
  for (int j = 0;j < m*k;j+=k)
  {
   if (abs(h - temp) == j&& h!=temp)
   {
    ans++;
    //cout << temp << "**************** ";
    break;
   }
  }
 }
 cout << ans << "\n";
}
 
int main()
{
    elkhawaga;
 ll t;cin >> t;
 for (int i = 0;i < t;i++) tcase();
}