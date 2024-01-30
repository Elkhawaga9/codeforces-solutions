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
 
 
ll get_sum(ll n)
{
    return(n * (n + 1) / 2);
}
void tcase()
{
    ll n,k,x;
    cin >> n>>k>>x;
    if (get_sum(n) < x|| get_sum(n) - get_sum(n - k) < x||get_sum(k)>x)no;
    else
    {
        if (get_sum(k - 1) >= x||(2*n-k+1)*k/2<x)no;
        else yes;
    }
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
        cout << "\n";
    }
}