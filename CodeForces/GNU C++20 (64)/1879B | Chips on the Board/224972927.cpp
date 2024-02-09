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
    vector<ll>vec1(n), vec2(n);
    ll s1 =0, s2=0;
    for (ll &i : vec1)
    {
        cin >> i;
        s1 += i;
    }
    for (ll &i : vec2)
    {
        cin >> i;
        s2 += i;
    }
   // cout << s1 << " " << s2 << "\n\n";
    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());
    cout << min(vec1[0] * n + s2, vec2[0] * n + s1);
 
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