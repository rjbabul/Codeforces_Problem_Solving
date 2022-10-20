#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t,m;
    cin>>t;
    while(t-- && cin>>n>>m)
    {
        int col[9], row[9];
        int a[9][9];
        int x, y;

        memset(col, 0, sizeof(col));
        memset(row, 0, sizeof(row));
        memset(a, 0,sizeof(a));
        for(int i=1;i<=m;i++)
        {
           cin>>x>>y;
           col[y]++;
           row[x]++;
           a[x][y]=1;

        }
        int cnt=0, sub=0;
        for(int i =1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(row[i]==1 && col[j]==0) cnt++;
                if(row[i]==0 && col[j]==0)cnt++;
                if(row[i]==0 && col[j]==0)cnt++;
            }
        }
        if(cnt==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}
