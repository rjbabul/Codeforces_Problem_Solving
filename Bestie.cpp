#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    int t,n;
    cin>>t;
    while(t-- && cin>>n)
    {
        int a[21];
        int ans =0;
        int cnt=0;
        cin>>a[1];
        ans= a[1];
        for(int i=2;i<=n;i++)
        {
            cin>>a[i];
            ans= __gcd(ans, a[i]);
        }
        if(ans==1) cout<<0<<endl;
        else{

                int mn= 3;

            for(int i=n;i>=1;i--)
            {
              if(__gcd(ans, i)==1)
                  mn=min(mn,n-i+1);
            }
            cout<<mn<<endl;
        }
    }
    return 0;
}
