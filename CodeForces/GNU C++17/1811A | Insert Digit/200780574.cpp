#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    for (int j=0;j<t;j++)
    {
        long long q, u;
        cin >> q >> u;
        string s;
        cin >> s;
        int L = s.length();
        string res;
        int i = 0;
        while ((i < L) && (u <= (s[i] - '0')))
        {
            res.push_back(s[i]);
            ++i;
        }
        res.push_back(char(u + '0'));
        while (i < L)
        {
            res.push_back(s[i]);
            ++i;
        }
        cout << res << endl;
    }
}