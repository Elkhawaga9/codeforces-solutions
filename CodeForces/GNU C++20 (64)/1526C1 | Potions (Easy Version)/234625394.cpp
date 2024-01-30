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
    ll sum = 0,ans=0;
    priority_queue<ll>pq;
    for (int i =0;i<n;i++)
    {
        int temp;
        cin >> temp;
        if (temp >= 0) sum += temp,ans++;
        else
        {
            temp = -temp;
            if (sum - temp >= 0)
            {
                sum -= temp;
                pq.push(temp);
                ans++;
            }
            else
            {
                if (pq.empty()||temp>pq.top()) continue;
                sum += pq.top();
                pq.pop();
                sum -= temp;
                pq.push(temp);
            }
        }
    }
    cout << ans;
 
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