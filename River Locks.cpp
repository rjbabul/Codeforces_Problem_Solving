#include<bits/stdc++.h>
using namespace std;
typedef long long int i64;
int main()
{
    freopen("input.txt","r", stdin);
    i64 x;
    i64 sum ,p;
    int n;
    int t;

    while(cin>>n)
    {
        sum=0;
        p=0;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            sum+=x;
            p=max(p,(sum-1)/i+1);
        }
        cin>>t;
        while(t-- &&cin>>x)
        {
            if(x<p)cout<<-1<<endl;
            else cout<<(sum-1)/x+1<<endl;
        }
    }
    return 0;
}
