#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 42;
//map<ll, ll>m;
//void f(ll i, ll s)
//{
//
//    if (i == n)
//    {
//        return;
//    }
//    if (s == x) c++;
//    f(i + 1, s + arr[i + 1]);
//    s -= arr[i + 1];
//}
 
void tcase()
{
    ll n, m;
    cin >> n >> m;
    //ll arr1[50], arr2[50];
    ll s1 = 0, s2 = 0;
    for (int i = 0;i < n;i++)
    {
        ll tmp;cin >> tmp;
        s1 += tmp;
    }
    for (int i = 0;i < m;i++)
    {
        ll tmp;cin >> tmp;
        s2 += tmp;
    }
    if (s1 > s2)cout << "Tsondu\n";
    else if (s1 < s2)cout << "Tenzing\n";
    else cout << "Draw\n";
 
}
 
int main()
{
    elkhawaga;
    ll t;cin >> t;
    while (t--)tcase();
    return 0;
}