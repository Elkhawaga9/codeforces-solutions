#include <iostream>
#include <algorithm>
#include <set>
#include <string> 
using namespace std;
int main()
{
 
    long long  t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<char>s1, s2;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (i & 1)s2.insert(c);
            else s1.insert(c);
        }
        bool flag = true;
        for (auto& i : s2)
        {
            if (s1.count(i))
            {
                flag = false;
                break;
            }
 
        }
        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }
}