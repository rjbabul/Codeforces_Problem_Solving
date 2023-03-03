#include<bits/stdc++.h>
using namespace std;

int main()
{
     freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    int a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        int alice= a;
        int bob = a;
        int ans=a;
        while(b>0 && c>0)
        {
            int r;
            if(b>0 && bob>0)
            {
                 r= min(b, bob);
                 alice+=r;
                 ans+=r;
                 b-=r;
                 bob-=r;
            }
            if(c>0 && alice>0)
            {
                r= min(c, alice);
                bob+=r;
                ans+=r;
                c-=r;
                alice-=r;
            }
        }

        ans+= min(min(bob,alice)+1, d);

        cout<<ans<<endl;
    }

    return 0;
}
