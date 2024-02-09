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
    ll n;cin >> n;
    string word;cin >> word;
    ll ans = 1, temp = 1;
    for (ll i = 0;i < n - 1;i++)
    {
        if (word[i] == word[i + 1])
        {
            temp++;
        }
        else
        {
            ans = max(ans, temp);
            temp = 1;
        }
        ans = max(ans, temp);
    }
    cout << max(ans, temp) + 1<<"\n";
}
int main()
{
    elkhawaga;
    cin >> t;
    while(t--) tcase();
   
    return 0;
}