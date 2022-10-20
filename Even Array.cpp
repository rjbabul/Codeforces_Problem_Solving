#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n, a[1000];
    cin>>t;
    while(t--){
        cin>>n;
        int ev=0, od=0;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){
            if(i%2 != a[i]%2){
                if(a[i]%2==0) ev++;
                else od++;
            }
        }
        if(ev!=od)cout<<"-1"<<endl;
        else cout<<ev<<endl;
    }
    return 0;
}
অগ্রদূত
