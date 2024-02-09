#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"Yes\n"
#define no cout<<"No\n" 
#define pi pair<int,int>
using namespace std;
const int N = 1e5 + 5;
bool cmp(pair<int,int>& a,pair<int, int>& b)
{
    return a.first < b.first;
}
void tcase()
{
    int n;cin >> n;
    int arr[n][n];
    vector<int>vec(n);
    bool f = 1;
    for (int i = 0;i < n;i++)
    {
        int mx = INT_MIN;
        for (int j = 0;j < n;j++)
        {
            cin >> arr[i][j];
            mx = max(arr[i][j], mx);
        }
        if (mx == n - 1 && f)
        {
            vec[i] = mx + 1;
            f = 0;
        }
        else vec[i] = mx;
    }
    for (auto& i : vec)cout << i << " ";
}
int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
   // cin >> t;
    t = 1;
    for (int i = 0;i < t;i++)
    {
        tcase();
        //cout << "\n";
    }
}