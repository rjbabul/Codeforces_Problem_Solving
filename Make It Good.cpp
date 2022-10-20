#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    int a[200004];
    cin>>t;
    while(t--){
        cin>>n;

        for(int i=0;i<n;i++)cin>>a[i];
        int i;
        for(i=n-1;i>=1 ;i--) if(a[i]>a[i-1]) break;
        for(; i>=1;i--)if(a[i]<a[i-1]) break;
        cout<<i<<endl;
    }
    return 0;
}
