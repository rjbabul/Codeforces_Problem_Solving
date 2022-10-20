#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n, k, x, cnt;
    cin>>t;
    while(t-- && cin>>n>>k)
    {
        cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            cnt+=x;
        }
        if(cnt==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
