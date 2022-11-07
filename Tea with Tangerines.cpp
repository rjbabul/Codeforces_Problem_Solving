#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t-- && cin>>n)
    {
        int a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a, a+n);
        int mn = a[0];
        int ans =0;
        mn = mn *2-1;
        for(int i=1;i<n;i++)
        {
            ans+= ( a[i]-1)/mn;
        }
        cout<<ans<<endl;
    }
    return 0;
}
