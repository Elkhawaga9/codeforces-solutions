#include "bits/stdc++.h"
using namespace std;
int main()
{
 int n, t, k, d,t1,t2;
 cin >> n >> t >> k >> d;
 if (n % k == 0)
 {
  t1 = (n / k) * t;
 }
 
 else
 {
  t1 =  ((n / k) + 1) * t;
 }
 
 t2 = d + t;
 
 if (t1 <= t2) cout << "NO";
 else cout << "YES";
 return 0;
}