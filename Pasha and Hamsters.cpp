#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,x;
    while(cin>>n>>a>>b)
    {
        map<int,int> mp;
        while(a--)
        {
            cin>>x;
            mp[x]=1;
        }
        while(b--)
        {
            cin>>x;
            if(mp[x]==0)
                mp[x]=2;
        }
        for(int i=1; i<=n; i++)
        {
            cout<<mp[i];
            if(i<n)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
