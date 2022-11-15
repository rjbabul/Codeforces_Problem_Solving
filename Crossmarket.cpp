#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m;
    cin>>t;
    while(t-- && cin>>n>>m)
    {
        if(n==m && n==1)
        {
            cout<<0<<endl;
            continue;
        }
        cout<<(n+m-2)+ min(m,n)<<endl;
    }
    return 0;
}
