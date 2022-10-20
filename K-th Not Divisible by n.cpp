#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t , k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n==k) cout<<n+1<<endl;

        else if(k%(n-1)==0) cout<<k/(n-1)*n -1<<endl;
        else{
            cout<<k/(n-1)*n + k%(n-1)<<endl;
        }
    }
    return 0;
}
