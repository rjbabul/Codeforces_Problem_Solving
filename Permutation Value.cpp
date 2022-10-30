#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t-- && cin>>n)
    {
        int s=n/2;
        for(int i=1;i<=n/2;i++)
        {
            cout<<i<<" "<<n-i+1<<" ";
        }
        if(n%2!=0) cout<<n/2+1;
        cout<<endl;

    }
    return 0;
}
