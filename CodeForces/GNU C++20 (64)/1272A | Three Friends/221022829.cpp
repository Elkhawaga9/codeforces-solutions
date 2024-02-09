#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
using namespace std;
 
bool cmp(pair<string, ll>& a, pair<string, ll>& b)
{
    return  a.second == b.second ? a.first<b.first : a.second>b.second;
}
 
 
//vector<ll> getDivisors(ll n)
//{
//    vector<ll>vec;
//    // Note that this loop runs till square root
//    for (ll i = 1; i <= sqrtl(n); i++)
//    {
//        if (n % i == 0)
//        {
//            // If divisors are equal, print only one
//            if (n / i == i)
//                vec.push_back(i);
//
//            else // Otherwise print both
//            {
//                vec.push_back(i);
//                vec.push_back( n / i);
//            }
//        }
//    }
//    return vec;
//}
 
void tcase()
{
    //ll a, b, c;
    //cin >> a >> b >> c;
    vector<ll>vec(3);
    for (int i = 0;i < 3;i++) cin >> vec[i];
    sort(vec.begin(), vec.end());
    if (vec[0] == vec[1] && vec[1] == vec[2]) cout << "0\n";
    else if (vec[0] == vec[1])
    {
        vec[2]--;
        if(vec[0] == vec[1] && vec[1] == vec[2]) cout << "0\n";
        else
        {
            vec[0]++;
            vec[1]++;
            cout << 2*abs(vec[2] - vec[0])<<"\n";
        }
    }
    else if (vec[1] == vec[2])
    {
        vec[0]++;
        if (vec[0] == vec[1] && vec[1] == vec[2]) cout << "0\n";
        else
        {
            vec[1]--;
            vec[2]--;
            cout << 2 * abs(vec[2] - vec[0])<<"\n";
        }
    }
    else
    {
        ll ans = INT_MAX,temp_ans;
        vec[0]++;
        temp_ans = abs(vec[2] - vec[1]) + abs(vec[2] - vec[0]) + abs(vec[1] - vec[0]);
        ans = min(temp_ans, ans);
        vec[2]--;
        temp_ans = abs(vec[2] - vec[1]) + abs(vec[2] - vec[0]) + abs(vec[1] - vec[0]);
        ans = min(temp_ans, ans);
        vec[1]++;
        temp_ans = abs(vec[2] - vec[1]) + abs(vec[2] - vec[0]) + abs(vec[1] - vec[0]);
        ans = min(temp_ans, ans);
        cout << ans << "\n";
    }
}
int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
    cin >> t;
    //t = 1;
    for (int i = 0;i < t;i++) tcase();
}