#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int a ,b;
        cin>>a>>b;

       int mx = min(a, b/2);
       int sum = 3*mx;
       cout<<sum<<endl;
    }
    
    return 0;
}