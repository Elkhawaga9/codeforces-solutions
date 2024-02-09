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
    vector<int>vec(n);
    for (auto& i : vec)cin >> i;
    if (n & 1)
    {
        cout << 5 << "\n";
        cout << 1 <<" " << n - 1 << "\n";
        cout << 1 << " " << n - 1 << "\n";
        cout << n - 1 << " " << n << "\n";
        cout << n - 1 << " " << n << "\n";
        cout << 1 << " " << n << "\n";
    }
    else
    {
        cout << 2 << "\n";
        cout << 1 << " " << n << "\n";
        cout << 1 << " " << n << "\n";
    }
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
        //cout << "\n";
    }
}