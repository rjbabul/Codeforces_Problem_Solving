#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a[1000];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n; i++)cin>>a[i];
        sort(a, a+n);
        int flag =0;
        for(int i=1;i<n; i++){
            if(a[i]-a[i-1]> 1) flag=1;
        }
        if(flag ==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
