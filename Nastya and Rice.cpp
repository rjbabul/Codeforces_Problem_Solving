#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a,b,c,d;
    cin>>t;
    while(t--){
        cin>>n>>a>>b>>c>>d;
        int mx,mn;
        mx= (a+b)*n;
        mn=(a-b)*n;
        if(mn>(c+d) || mx<(c-d)) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}
