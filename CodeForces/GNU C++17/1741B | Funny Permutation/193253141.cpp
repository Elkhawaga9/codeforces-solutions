#include <bits/stdc++.h>
//#include <algorithm.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      if (n==2)cout<<"2 1\n";
      else  if (n==3)cout<<"-1\n";
      else 
          {
              int ar[n];
              for (int i = 0;i<n;i++) ar[i]=i+1;
              reverse (ar,ar+n);
              for(int i =0;i<n/2;i++) cout<<ar[i]<<" ";
              for(int i =n-1;i>=n/2;i--) cout<<ar[i]<<" ";
              cout<<endl;
          }
    }
}