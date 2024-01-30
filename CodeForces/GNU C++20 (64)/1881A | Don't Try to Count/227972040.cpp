 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n" 
#define pi pair<int,int>
using namespace std;
const ll N = 1e9 + 1;
bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.first < b.first;
}
 
 
ll get_sum(ll n)
{
    return(n * (n + 1) / 2);
}
 
bool ok(ll m)
{
   
    return 1;
}
vector<ll>getPowersOfTwo ()
{
    vector<ll>vec;
    vec.push_back(0);
    for (ll i = 0;i < 63;i++)
    {
        vec.push_back(1LL << i);
    }
    return vec;
}
void tcase()
{
    int n, m;
    cin >> n >> m;
    string x, s;cin >> x >> s;
    int c = -1;
    //int tt = 15
    bool f = 0;
    while (x.length()<=150)
    {
        if (x.find(s) != string::npos)
        {
            //cout << c
            f=1;
            break;
        }
        else
        {
            x += x;
            c++;
        }
        
    }
    if (f)cout << c+1;
    else cout<<-1;
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