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
 
 
 
void tcase()
{
    string s;
    vector<string>vec;
    int mx_size = 0;
    while (getline(cin, s)) {
        int len = s.length();
        mx_size = max(len, mx_size);
        vec.push_back(s);
    }
 
 
    for (int i = 0;i < mx_size + 2;i++)cout << "*";
    cout << "\n";
    bool f = 0;
    for (auto& i : vec)
    {
        int dif = mx_size - i.length();
        string space1 = string( dif/2,' ');
        string space2 = string(dif / 2+1, ' ');
 
        cout << '*';
        if (space1.length() + i.length() + space1.length() == mx_size)
        {
            cout << space1 << i << space1<<"*\n";
        }
        else
        {
            if (!f)
            {
                cout << space1 << i << space2 << "*\n";
                f = 1;
            }
            else
            {
                cout << space2 << i << space1 << "*\n";
                f = 0;
            }
        }
    }
    for (int i = 0;i < mx_size + 2;i++)cout << "*";
 
}
int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
    //cin >> t;
    t = 1;
    for (int i = 0;i < t;i++)
    {
        tcase();
        //cout << "\n";
    }
}