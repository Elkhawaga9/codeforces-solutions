#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 10e6;
//map<ll, ll>m;
 
 
void tcase()
{
    ll t; cin >> t;
    vector<ll>vec(t);
    ll sum = 0;
    for (ll i = 0;i < t;i++) cin >> vec[i];
    vec.push_back(5);
    ll c = 0;
    for (ll i = 0;i < t;i++)
    {
        if (vec[i] < 0)
        {
            while (vec[i] <= 0&&i<t)
            {
                vec[i] *= -1;
                i++;
            }
            c++;
        }
    }
    for (auto& i : vec)
    {
        //cout << i << " ";
        sum += i;
    }
    cout << sum-5 << " " << c << "\n";
}
 
 
//void tcase()
//{
//    int n;cin >> n;
//    string w, answer;cin >> w;
//
//    for (int i = 0;i < n;i++)
//    {
//        for (int j = i + 1;j < n;j++)
//        {
//            if (w[i] == w[j])
//            {
//                i = j;
//                break;
//            }
//        }
//    }
//    cout << answer << "\n";
//}
int main()
{
    elkhawaga;
    ll n;cin >> n;
    while (n--)tcase();
    return 0;
}