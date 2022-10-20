#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%4!=0) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            long int sum =0,odd=0;
            int j=2;
            for(int i=1;i<=n/2;i++){
                cout<<j<<" ";
                sum+=j;
                j+=2;
            }
            j=1;
            for(int i=1;i<=n/2-1;i++){
                cout<<j<<" ";
                odd+=j;
                j+=2;
            }
            cout<<sum-odd<<endl;
        }
    }
    return 0;
}
