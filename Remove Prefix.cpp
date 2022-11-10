#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t-- && cin>>n)
    {
        int a[n+1];
        map< int, int > mp;
        for(int i=0;i<n;i++)cin>>a[i];
        int i ;
        for(i= n-1;i>=0;i--)
        {
            mp[a[i]]++;
            if(mp[a[i]]>1)break;
        }
        cout<<i+1<<endl;
    }
    return 0;
}
