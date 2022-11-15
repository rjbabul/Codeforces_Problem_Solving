#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t,ans,x;
    cin>>t;
    while(t-- && cin>>n)
    {
        ans, x;
        cin>>x;
        ans=x;
        for(int i=1;i<n;i++)cin>>x;
        if(ans==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
