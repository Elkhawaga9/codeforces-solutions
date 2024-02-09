#include "bits/stdc++.h"
using namespace std;
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
     int n;
     cin>>n;
     vector<string>vec(3*n);
     map<string,int>m;
     int s1=0,s2=0,s3=0;
     for(int i =0;i<3*n;i++) cin>>vec[i];
     for(int i =0;i<3*n;i++)
        {
           if(m.find(vec[i])==m.end()) m[vec[i]] = 1;
           else m[vec[i]]++;
        }
        for(int j =0;j<n;j++)
        {
            if (m[vec[j]]==1) s1+=3;
            else if (m[vec[j]]==2) s1+=1;
            else s1+=0;
        }
        for(int j =n;j<2*n;j++)
        {
            if (m[vec[j]]==1) s2+=3;
            else if (m[vec[j]]==2) s2+=1;
            else s2+=0;
        }
        for(int j =2*n;j<3*n;j++)
        {
            if (m[vec[j]]==1) s3+=3;
            else if (m[vec[j]]==2) s3+=1;
            else s3+=0;
        }
        cout<<s1<<" "<<s2<<" "<<s3<<endl;
 
 
 }
 
 return 0;
}
 