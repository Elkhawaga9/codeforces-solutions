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
 while(t--)
 {
  int n,q;
  cin >> n >> q;
  ll arr[n];
  ll prefixSum[n+1];
  for (int i = 0;i < n;i++) cin >> arr[i];
 
  prefixSum[0] = arr[0];
  for (int i = 1; i < n; i++)
        {
            prefixSum[i] = prefixSum[i - 1] + arr[i];
        }
        //  2 2 1 3 2 -> 2 4 5 8 10
 
        //prefixSum[n] = 0;
        //cout<<summ<<"\n\n";
  while(q--)
  {
            ll summ = prefixSum[n-1];
            //cout<<"*****"<<summ<<"****\n";
   ll l, r,k;
   cin >> l >> r >> k;
   ll dif = prefixSum[r-1]-(prefixSum[l-1]-arr[l-1]);
            ll sum1 = summ-dif+(r-l+1)*k;
            //cout<<sum1<<"\n";
   if (sum1 % 2 == 0) cout << "NO\n";
   else cout << "YES\n";
  }
 
 
 }
}
 
 
 