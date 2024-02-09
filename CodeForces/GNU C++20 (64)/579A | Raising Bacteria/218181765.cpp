#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
using namespace std;
 
ll freq[5];
void tcase()
{
    ll n;cin >> n;
    ll c = 0;
    while (n)
    {
        if (n & 1) c++;
        n >>= 1;
    }
    cout << c;
}
int main()
{
    elkhawaga;
    ll t;
    //cin >> t;
    t = 1;
    for (int i = 0;i < t;i++)tcase();
 
}