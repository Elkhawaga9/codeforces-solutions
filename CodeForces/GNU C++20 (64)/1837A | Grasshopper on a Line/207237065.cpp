#include <bits/stdc++.h>
using namespace std;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define pi 3.141592653589793238462643383279
typedef long long ll;
typedef long double ld;
const ll N = 10e9 + 1;
string pei = "3141592653589793238462643383279";
ll t;
ll arr[1001];
void f(ll i)
{
   
}
void tcase()
{
    ll x,k; cin >> x>>k;
    if (x % k == 0)
    {
        cout << 2 << "\n";
        cout << k + 1<<" " << x- (k + 1) << "\n";
    }
    else
    {
        cout << 1 << "\n" << x<<"\n";
    }
}
int main()
{
    elkhawaga;
    cin >> t;
    while(t--) tcase();
   
    return 0;
}