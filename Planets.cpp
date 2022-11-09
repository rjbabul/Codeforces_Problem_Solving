#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    int t, n,c;
    cin>>t;
    while(t-- && cin>>n>>c)
    {
        int a[101],x;
        int cnt[101];
        memset(cnt, 0, sizeof(cnt));
        memset(a, 0, sizeof(a));
        int j=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(cnt[x]==0) a[j++]=x;
            cnt[x]++;
        }
        int ans=0;

        for(int i=0;i<j;i++)
        {
            x= a[i];
            ans+= min(cnt[x],c);
        }
        cout<<ans<<endl;
    }
    return 0;
}
