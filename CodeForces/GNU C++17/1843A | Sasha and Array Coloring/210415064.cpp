#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 10e6;
//map<ll, ll>m;
 
 
void tcase()
{
    ll t; cin >> t;
    vector<ll>vec(t);
    ll c = 0;
    for (ll i = 0;i < t;i++) cin >> vec[i];
    sort(vec.begin(),vec.end());
    for (int i = 0;i < t / 2;i++)
    {
        c += (vec[t - i - 1] - vec[i]);
    }
    cout << c<<"\n";
}
int main()
{
    elkhawaga;
    ll n;cin >> n;
    while (n--)tcase();
    return 0;
}