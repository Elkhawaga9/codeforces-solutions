#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"Yes\n"
#define no cout<<"No\n" 
#define pi pair<int,int>
using namespace std;
const int N = 1e6 + 5;
bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.first < b.first;
}
 
bool ok(ll m)
{
    return m;
}
 
 
//void tcase()
//{
//    //sliding window
//    int n, t;
//    cin >> n >> t;
//    vector<ll>vec(n);
//    for (auto& i : vec)cin >> i;
//
//    int p = 0, s = 0;
//    for (int i = 0;i < n;i++)
//    {
//        while (p < n && s + vec[p] <= t)
//        {
//            s += vec[p];
//            p++;
//        }
//        s -= vec[i];
//    }
//}
 
bool vowel(char i)
{
    if (i == 'a' || i == 'e') return 1;
    else return 0;
}
 
void tcase()
{
    int n;cin >> n;
    string s;cin >> s;
    vector<string>vec;
  
        for (int i = n - 1;i >= 0;i--)
        {
            if (!vowel(s[i]))
            {
                string temp;
                if(i>=2)temp.push_back(s[i-2]);
                if(i>=1)temp.push_back(s[i - 1]);
                temp.push_back(s[i]);
                vec.push_back(temp);
                i -= 2;
            }
            else
            {
                string temp;
                if(i>=1)temp.push_back(s[i - 1]);
                temp.push_back(s[i]);
                vec.push_back(temp);
                i -= 1;
            }
        }
    
 
    for (int i = vec.size()-1;i >= 0;i--)
    {
        if (i == 0)cout << vec[i];
        else cout << vec[i] << ".";
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
        cout << "\n";
    }
}