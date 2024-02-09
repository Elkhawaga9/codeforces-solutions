#include "bits/stdc++.h"
using namespace std;
 
int main()
{
 int s1,s2,s3,s4;
 cin >> s1 >> s2 >> s3 >> s4;
 set <int> vals;
 vals.insert(s1);
 vals.insert(s2);
 vals.insert(s3);
 vals.insert(s4);
 cout << 4 - vals.size();
 return 0;
}