#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 42;
ll fr1[10] = { 0 }, fr2[10] = { 0 };
 
ld area(ld b,ld h)
{
    return 0.5 * b * h;
}
void tcase()
{
   
}
 
int main()
{
    elkhawaga;
    //ll t;cin >> t;
    //while (t--)tcase();
    ll n, m;cin >> n >> m;
    for (ll i = 1;i <= n;i++)
    {
        fr1[i % 5]++;
    }
    for (ll i = 1;i <= m;i++)
    {
        fr2[i % 5]++;
    }
    cout << fr1[1] * fr2[4] + fr1[2] * fr2[3] + fr1[3] * fr2[2] + fr1[4] * fr2[1]+fr1[0]*fr2[0];
    return 0;
}