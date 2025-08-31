#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin>>t;

    while (t--)
    {
       int n = 3;
      string ans;

       for (int i = 0; i < n; i++)
       {
         string s;
         cin>>s;
         ans.push_back(s[0]);
       }
       cout<<ans<<endl;
       
    }
    

    return 0;
}