#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a[1002], b[1002];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a, a+n);
        sort(b, b+n);
        for(int i=0;i<n;i++){
            cout<<a[i];
            if(i<n-1)cout<<" ";
        }
        cout<<endl;
         for(int i=0;i<n;i++){
            cout<<b[i];
            if(i<n-1)cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
