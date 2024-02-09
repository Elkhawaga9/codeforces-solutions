#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void elkhawaga() {
    std::ios_base::sync_with_stdio(0);
}
void tcase()
{
    ll n,s=0; cin >> n;
    vector<ll>vec(n);
    for (int i = 0;i < n;i++)
    {
        cin >> vec[i];
        s += vec[i];
    }
    ll tmpans = 0;
    for (int i = 0;i < n;i++)
    {
        tmpans += vec[i];
        if (tmpans % 2 == (s - tmpans) % 2)
        {
            cout <<"YES\n";
            return;
        }
    }
    cout << "NO\n";
}
int main()
{
    elkhawaga();
    ll t;cin >> t;
    for (int i = 0;i < t;i++) tcase();
 
}