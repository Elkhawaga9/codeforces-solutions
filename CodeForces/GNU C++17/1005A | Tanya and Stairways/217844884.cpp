#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void elkhawaga() {
    std::ios_base::sync_with_stdio(0);
}
void tcase()
{
    ll n;cin >> n;
    ll no = 1;
    vector<ll>vec(n);
    vector<ll>ans;
    cin >> vec[0];
    for (int i=1;i<n;i++)
    {
        cin >> vec[i];
        if (vec[i] == 1)
        {
            no++;
            ans.push_back(vec[i - 1]);
        }
    }
    ans.push_back(vec[n - 1]);
    cout << no<<"\n";
    for (auto& i : ans)cout << i << " ";
}
int main()
{
    elkhawaga();
    ll t;
    //cin >> t;
    t = 1;
    for (int i = 0;i < t;i++) tcase();
 
}