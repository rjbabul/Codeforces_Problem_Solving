#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t-- && cin>>n)
    {
        int a[n+1];
        int b[n+1];
        int mn =0, ans=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            mn+= (b[i]^a[i]);
        }
        sort(a, a+n);
        sort(b, b+n);
        ans++;
        for(int  i=0;i<n;i++)
        {
            ans+= (a[i]^b[i]);
        }
        cout<<min(ans, mn)<<endl;
    }
    return 0;
}
