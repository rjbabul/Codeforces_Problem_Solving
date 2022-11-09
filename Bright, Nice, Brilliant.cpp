#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    cin>>t;
    while(t-- && cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
                if(j==1 || j==i)cout<<1<<" ";
                else cout<<0<<" ";
                cout<<endl;
        }
    }
    return 0;
}
