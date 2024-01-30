#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
 
void solve(){
 ll n; cin>>n;
 ll sum = 0;
 while(n){
  sum+=(n);
  n/=2;
 }
 cout<<sum<<endl;
 
 
}
int main() {
 int t = 1;
 cin>>t;
 while(t--){
  solve();
 }
}       