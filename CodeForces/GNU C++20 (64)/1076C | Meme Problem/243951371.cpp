#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n" 
#define pi pair<int,int>
using namespace std;
//const int N = 1e6 + 5;
bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.first < b.first;
}
 
void tcase()
{
    ld d;cin >> d;
    if (d < 4&&d!=0) cout << "N";
    else
    {
        cout << "Y "<< (d + sqrtl(d * d - 4 * d)) / 2 << " " << (d - sqrtl(d * d - 4 * d)) / 2;
    }
}
int main()
{
    elkhawaga;
    cout << fixed << setprecision(10);
    ll t;
    t = 1;
    cin >> t;
    for (int i = 0;i < t;i++)
    {
        tcase();
        cout << "\n";
    }
}