#include "bits/stdc++.h"
using namespace std;
int main()
{
 int t;
 cin >> t;
 while (t--)
 {
        bool red = false;
        for(int i=0;i<8;i++)
        {
            string s;
            cin>>s;
            if (s == "RRRRRRRR") red = true;
        }
        if(red) cout<<"R"<<"\n";
        else cout<<"B"<<"\n";
 }
 
 return 0;
}
 