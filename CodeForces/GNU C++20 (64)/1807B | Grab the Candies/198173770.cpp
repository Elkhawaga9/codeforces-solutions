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
  int n;
  cin >> n;
  ll s_even = 0,s_odd = 0;
  for(int i =0;i<n;i++)
        {
            int temp;
            cin>>temp;
            if (temp%2==0) s_even+=temp;
            else s_odd+=temp;
        }
  if (s_even>s_odd) cout<<"YES\n";
  else cout<<"NO\n";
 }
}