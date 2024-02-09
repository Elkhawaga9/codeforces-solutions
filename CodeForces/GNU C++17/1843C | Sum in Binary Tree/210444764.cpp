#include "bits/stdc++.h"
typedef long long ll;
typedef long double ld;
using namespace std;
 
ll Psum(ll n)
{
    if (n == 1)
        return 1;
 
    ll y = n / 2;
    ll x = Psum(y);
 
    return x + n;
}
 
int main()
{
    int t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        ll path = Psum(n);
        cout << path << endl;
    }
    return 0;
}