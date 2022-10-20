#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[5],x,y,z;
    int t;
    cin>>t;
    while(t--){
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[2]!=a[1])cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<a[2]<<" "<<a[0]<<" "<<a[0]<<endl;
        }

    }
    return 0;
}
