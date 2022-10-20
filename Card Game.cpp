#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k1,k2,mxk1, mxk2;
    cin>>t;
    while(t--){
        cin>>n>>k1>>k2;
        int x;
        mxk1=0;
        mxk2=0;
        for(int i=1;i<=k1;i++){
            cin>>x;
            mxk1= max(mxk1,x);
        }
        for(int i=1;i<=k2;i++){
            cin>>x;
            mxk2= max(mxk2,x);
        }
        if(mxk1>mxk2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
