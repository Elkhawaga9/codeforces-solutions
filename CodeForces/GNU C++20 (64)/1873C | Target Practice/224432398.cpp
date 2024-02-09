#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n" 
#define pi pair<int,int>
using namespace std;
const int N = 1e6 + 5;
bool cmp(pair<int,int>& a,pair<int, int>& b)
{
    return a.first < b.first;
}
 
bool ok(ll m)
{
    return m;
}
 
 
void tcase()
{
    char arr[11][11];
    ll ans = 0;
    for (int i = 1;i <= 10;i++)
    {
        for (int j = 1;j <= 10;j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'X')
            {
                ans += min({ 10 - j +1,j,i,10 - i+1 });
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
    cin >> t;
    //t = 1;
    for (int i = 0;i < t;i++)
    {
        tcase();
        cout << "\n";
    }
}