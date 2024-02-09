#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, h,ch,res=0;
    cin >> n >> h;
    for (int i = 1; i <= n;i++)
    {
        cin >> ch;
        if (ch > h) res += 2;
        else res += 1;
    }
    cout << res;
    return 0;
}