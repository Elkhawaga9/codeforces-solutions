#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define elkhawaga  std::ios_base::sync_with_stdio(0)
using namespace std;
 
bool cmp(pair<string, ll>& a, pair<string, ll>& b)
{
    return  a.second == b.second ? a.first<b.first : a.second>b.second;
}
 
 
 
/*
    vtfre
    gtrfeihgbv
    gvrfuyhtgk
 
*/
 
void tcase()
{
 
    int n, m;cin >> n >> m;
    char arr[n][m];
    int p = 0;
    string word = "vika";
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++) cin >> arr[i][j];
    }
    if (m < 4)
    {
        cout << "NO\n";
        return;
    }
    for (int col = 0;col < m;col++)
    {
        for (int row = 0;row < n;row++)
        {
            if (arr[row][col] == word[p])
            {
                p++;
                break;
            }
        }
    }
    if (p >= 4) cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    elkhawaga;
    ll t;
    cin >> t;
    //t = 1;
    for (int i = 0;i < t;i++) tcase();
}