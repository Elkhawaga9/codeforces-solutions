//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0) 
#define pi pair<int,int>
using namespace std;
 
void fileInputOutput()
{
#pragma warning (disable:4996)
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
//bool cmp(pair<int,int>& a,pair<int, int>& b)
//{
//    return a.first < b.first;
//}
//
void tcase()
{
    int n;
    cin >> n;
    vector<pi>vec(n);
    ll ans = -1;
    int max_endu;
    int f = 1;
    for (int i = 0;i < n;i++)
    {
        int power, endu;
        cin >> power >> endu;
        if (i == 0)
        {
            ans = power;
            max_endu = endu;
        }
        else
        {
            if (power >= ans)
            {
                if (endu >= max_endu) f = 0;
            }
        }
 
    }
    if (f) cout << ans;
    else cout << -1;
}
int main()
{
    elkhawaga;
    ll t;
    //t = 1;
    //fileInputOutput();
    cin >> t;
    for (int i = 1;i <= t;i++)
    {
        tcase();
        cout << "\n";
    }
}