#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n" 
#define pi pair<ll,ll>
using namespace std;
const int N = 1e6 + 5;
bool cmp(pair<int,int>& a,pair<int, int>& b)
{
    return a.first < b.first;
}
 
 
 
void tcase()
{
    ll n, k;
    cin >> n >> k;
    bool f = 0;
    for (int i = 0;i < n;i++)
    {
        ll temp;cin >> temp;
        if (temp == k) f = 1;
    }
    if (f)yes;
    else no;
}
int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
    cin >> t;
    //t = 1;
    for (int i = 0;i < t;i++)
    {
        tcase();
       // cout << "\n";
    }
}