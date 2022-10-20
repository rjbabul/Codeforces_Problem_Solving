#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a;
            if(i%2==1)cout<<-1*abs(a);
            else cout<<abs(a);
            if(i<n) cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
