#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga ios_base::sync_with_stdio(false);cin.tie(nullptr)
//#define pi 3.141592653589793238462643383279
const ll N = 42;
//void tcase()
//{
//    ll n;cin >> n;
//    vector<ll>vec;
//
//    for (int i = 0;i < n;i++)
//    {
//        cin >> vec[i];
//    }
//    ll s = 0;
//    bool f = 0;
//    while (!f)
//    {
//        for (int i = n - 1;i >= s;i--)
//        {
//            if (vec[s] == vec[i])
//            {
//                s = i;
//                f = 0;
//            }
//                
//        }
//        s++;
//    }
//}
 
int main()
{
    elkhawaga;
    ll t;cin >> t;
    //while (t--)tcase();
    ll arr[] = { 4,7,44,47,74,77,444,777,477,747,774,744,474,447 };
    for (ll i = 0;i < 14;i++)
    {
        if (t % arr[i] == 0)
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}