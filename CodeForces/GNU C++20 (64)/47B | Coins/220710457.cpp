#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
using namespace std;
 
bool cmp(pair<string, ll>& a, pair<string, ll>& b)
{
    return  a.second == b.second ? a.first<b.first : a.second>b.second;
}
 
 
//vector<ll> getDivisors(int n)
//{
//    vector<ll>vec;
//    // Note that this loop runs till square root
//    for (int i = 1; i <= sqrt(n); i++)
//    {
//        if (n % i == 0)
//        {
//            // If divisors are equal, print only one
//            if (n / i == i)
//                vec.push_back(i);
//
//            else // Otherwise print both
//            {
//                vec.push_back(i);
//                vec.push_back( n / i);
//            }
//        }
//    }
//    return vec;
//}
 
void tcase()
{
    string w1, w2, w3;
    deque<char>d;
    cin >> w1 >> w2 >> w3;
    if (w1[1] == '<')
    {
        swap(w1[0], w1[2]);
        w1[1] = '>';
    }
    if (w2[1] == '<')
    {
        swap(w2[0], w2[2]);
        w2[1] = '>';
    }
    if (w3[1] == '<')
    {
        swap(w3[0], w3[2]);
        w3[1] = '>';
    }
    if (w1[0] == w2[0])
    {
        d.push_back(w1[0]);
        d.push_front(w3[0]);
        d.push_front(w3[2]);
    }
    else if (w2[0] == w3[0])
    {
        d.push_back(w3[0]);
        d.push_front(w1[0]);
        d.push_front(w1[2]);
    }
    else if (w1[0] == w3[0])
    {
        d.push_back(w3[0]);
        d.push_front(w2[0]);
        d.push_front(w2[2]);
    }
    else
    {
        cout << "Impossible";
        return;
    }
    for (auto& it : d) cout << it;
}
int main()
{
    elkhawaga;
    ll t;
    //cin >> t;
    t = 1;
    for (int i = 0;i < t;i++) tcase();
}