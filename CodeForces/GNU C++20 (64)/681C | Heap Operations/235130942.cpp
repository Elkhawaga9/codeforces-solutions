#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pi pair<int,int>
using namespace std;
//const ll N = 1e6 + 5;
//bool cmp(pair<int, int>& a, pair<int, int>& b)
//{
//    return a.first < b.first;
//}
//
//
//ll get_sum(ll n)
//{
//    return(n * (n + 1) / 2);
//}
//
//bool ok(ll m)
//{
//
//    return 1;
//}
//vector<ll>getPowersOfTwo()
//{
//    vector<ll>vec;
//    vec.push_back(0);
//    for (ll i = 0;i < 63;i++)
//    {
//        vec.push_back(1LL << i);
//    }
//    return vec;
//}
 
void tcase()
{
    int n;cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<string>vec;
    for (int i = 0;i < n;i++)
    {
        string op;cin >> op;
        if (op == "insert")
        {
            int x;cin >> x;
            pq.push(x);
            string tempans = "insert ";
            tempans += to_string(x);
            vec.push_back(tempans);
        }
        else if (op == "removeMin")
        {
            if (pq.empty())
            {
                vec.push_back("insert 0");
                vec.push_back(op);
            }
            else
            {
                pq.pop();
                vec.push_back(op);
            }
        }
        else
        {
            int x;cin >> x;
            while (!pq.empty() && pq.top() < x)
            {
                pq.pop();
                vec.push_back("removeMin");
            }
            if (pq.empty() || pq.top() > x)
            {
                pq.push(x);
                string tempans = "insert ";
                tempans += to_string(x);
                vec.push_back(tempans);
            }
            op += ' ';
            op += to_string(x);
            vec.push_back(op);
        }
   
    }
    cout << vec.size()<<"\n";
    for (auto& i : vec) cout << i << "\n";
}
 
int main()
{
    elkhawaga;
    //cout << fixed << setprecision(10);
    ll t;
    //cin >> t;
    t = 1;
    while (t--)
    {
        tcase();
        //cout << "\n";
    }
       
    
}