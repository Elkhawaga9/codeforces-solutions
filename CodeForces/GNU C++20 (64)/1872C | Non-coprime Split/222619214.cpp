#include<bits/stdc++.h>
#include <algorithm>
#include<numeric>
using namespace std;
 
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
using namespace std;
 
bool cmp(pair<int,int>& a,pair<int, int>& b)
{
    return a.second < b.second;
}
 
void tcase()
{
    int l, r;
    cin >> l >> r;
 
    if (l % 2 == 0&&l!=2)
    {
        cout << 2 << " " << l - 2 << "\n";
        return;
    }
    if (r % 2 == 0&&r!=2)
    {
        cout << 2 << " " << r - 2 << "\n";
        return;
    }
    for (int i = l;i <= r;i++)
    {
        if (i % 2 == 0 && i!=2)
        {
            cout << 2 << " " << i - 2<<"\n";
            return;
        }
    }
     if (l == r && l&1)
    {
       for(ll i =2;i*i<=l;i++)
       {
           if(l%i==0)
           {
               cout<<i<<" "<<l-i<<"\n";
               return;
           }
       }
    }
 
    cout << -1 << "\n";
}
int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
    cin >> t;
   // t = 1;
    for (int i = 0;i < t;i++) tcase();
}