#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void elkhawaga() {
    std::ios_base::sync_with_stdio(0);
}
void tcase()
{
 
}
int main()
{
    elkhawaga();
    ll t; cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll>vec(n);
        for (int i = 0;i < n;i++)
        {
            cin >> vec[i];
        }
        ll left = n - 1;
        ll c = 0;
        for (int i = 0;i < n;i++)
        {
            if (vec[i] == vec[0])
                c++;
            if (c == k)
            {
                left = i;
                break;
            }
 
        }
 
        if (c < k)
        {
            cout << "NO\n";
            continue;
        }
        else
        {
            if (vec[0] == vec[n - 1])
            {
                cout << "YES\n";
                continue;
            }
        }
        c = 0;
        for (int i = n - 1; i > left;i--)
        {
            if (vec[i] == vec[n - 1])
                c++;
        }
        if (c >= k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
 
 
 
 
}