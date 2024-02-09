#include "bits/stdc++.h"
using namespace std;
 
int main()
{
int n,counter=0;
string word;
cin>>n;
cin>>word;
for(int i =1 ;i<n;i++)
{
    if (word[i-1]==word[i]) counter +=1;
 
}
cout<<counter;
 return 0;
}