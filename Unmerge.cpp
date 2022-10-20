#include<bits/stdc++.h>
using namespace std;
#define  pb push_back
int main()
{
    int t, n, x;
    cin>>t;
    while(t--)
    {
        vector< int > coin;
         map<int, int > mp;
        cin>>n;
        coin.pb(0);
        for(int i=1; i<=2*n; i++)
        {
            cin>>x;
            mp[x]=i;
        }
        int index=2*n;
        for(int i= 2*n; i>=1; i--)
        {
            if(mp[i]<=index)
            {
                coin.pb(index-mp[i]+1);
                index= mp[i]-1;
            }
        }
        int dp[coin.size()][n +1];

        memset(dp,0,sizeof(dp));

        for(int i=0; i<coin.size(); i++)
            dp[i][0]=1;

        for(int i=1; i<coin.size(); i++)
        {
            for(int j=1; j<=n; j++)
            {
                    dp[i][j]=dp[i-1][j];
                    if(coin[i]<=j)
                    dp[i][j]|= dp[i-1][j-coin[i]];
            }
        }


        if(dp[coin.size()-1][n])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

       coin.clear();
       mp.clear();

    }
    return 0;
}
