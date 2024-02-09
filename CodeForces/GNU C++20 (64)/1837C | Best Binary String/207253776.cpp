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
    string word;cin >> word;
    ll l = word.length();
    char ex = '0';
    for (ll j = 0;j < l;j++)
    {
        if (word[j] == '?') word[j] = ex;
        else ex = word[j];
    }
    cout << word << "\n";
}
int main()
{
    elkhawaga;
    cin >> t;
    while(t--) tcase();
   
    return 0;
}