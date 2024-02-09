#include "bits/stdc++.h"
using namespace std;
 
int main()
{
 long long arr1[4],sum = 0;
 string arr2;
 for (int i = 0;i < 4;i++) cin >> arr1[i];
 cin >> arr2;
 for (auto i:arr2)
 {
  sum += arr1[atoi(&i) - 1];
 }
 cout << sum;
 return 0;
}