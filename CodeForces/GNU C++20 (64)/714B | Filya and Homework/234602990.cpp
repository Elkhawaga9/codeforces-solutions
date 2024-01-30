#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pi pair<int,int>
using namespace std;
//const ll N = 1e6 + 5;
//bool cmp(pair<int, int>& a, pair<int, int>& b)
//{
//    return a.first < b.first;
//}
//
//
//ll get_sum(ll n)
//{
//    return(n * (n + 1) / 2);
//}
//
//bool ok(ll m)
//{
//
//    return 1;
//}
//vector<ll>getPowersOfTwo()
//{
//    vector<ll>vec;
//    vec.push_back(0);
//    for (ll i = 0;i < 63;i++)
//    {
//        vec.push_back(1LL << i);
//    }
//    return vec;
//}
 
void tcase()
{
    int n;cin >> n;
    set<int>s;
    for (int i = 0;i < n;i++)
    {
        int temp;cin >> temp;
        s.insert(temp);
    }
    if (s.size() <= 2) yes;
    else if (s.size() == 3)
    {
        int i = 1, f = 1, mid = 2, l = 3;
        for (auto& it : s)
        {
            if (i == 1)
            {
                f = it;
            }
            else if (i == 2) mid = it;
            else l = it;
            i++;
        }
 
        if (mid == (f + l) / 2.0) yes;
        else no;
    }
    else no;
}
 
 
 
int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
    //cin >> t;
    t = 1;
    for (int i = 0;i < t;i++)
    {
        tcase();
        //cout << "\n";
    }
}