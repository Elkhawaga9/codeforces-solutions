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
int fr[26];
void tcase()
{
    int n, k,removed = 0;
    string r,word;
    cin >> n >>k;
    cin >> word;
    char temp,stop = 'a';
    for (int i = 0;i < n;i++)
    {
        temp = word[i];
        fr[temp - 'a']++;
    }
    for (int i = 0;i <26;i++)
    {
        if (k >= fr[i])
        {
            r += (char)(i + 'a');
            k -= fr[i];
            removed += fr[i];
        }
        else
        {
            stop = (char)(i + 'a');
            removed += k;
            break;
        }
    }
    //cout << r << "\n";
    for (int i = 0;i < n;i++)
    {
        if (r.find(word[i]) == string::npos)
        {
            if (word[i] == stop)
            {
                if (k)
                {
                    k--;
                    continue;
                }
 
            }
            cout << word[i];
        }
    }
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