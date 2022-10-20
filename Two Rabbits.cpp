#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int a,b,x,y;

        cin>>x>>y>>a>>b;
        x = y-x;
        a=a+b;
        if(x%a==0) cout<<x/a<<endl;
        else cout<<"-1"<<endl;

    }
    return 0;
}
