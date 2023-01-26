#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long int;   



int main() 
{
    ll t;//test cases
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        
        int ans=0;
        int i=0;
        for(;i<n;i++)
        {
            if(s[i]=='1')ans++;
            else break;
        }
        
        int t1=0,c=0;
        for(int j=n-1;j>=i;j--)
        {
            if(s[j]=='0'){t1=max(t1,c);c=0;}
            else c++;
        }
        
        cout<<ans+t1<<endl;
    }
    return 0;
}
