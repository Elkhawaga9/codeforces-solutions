 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n" 
#define pi pair<ll,ll>
using namespace std;
const int N = 1e5 + 5;
bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.first < b.first;
}
 
 
ll get_sum(ll n)
{
    return(n * (n + 1) / 2);
}
 
void tcase()
{
    int n;cin >> n;
    vector<ll>vec(n);
    for (auto& i : vec)cin >> i;
   // sort(vec.begin(), vec.end());
    ll ans = 0, rem_1 = 0, rem_2 = 0;
    for (int i = 0;i < n;i++)
    {
        if (vec[i] % 3 == 0) ans++;
        else if (vec[i] % 3 == 1) rem_1++;
        else if (vec[i] % 3 == 2)rem_2++;
    }
    ans += min(rem_1, rem_2);
    ans += abs(rem_1 - rem_2) / 3;
    cout << ans;
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