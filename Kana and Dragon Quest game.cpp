#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, n, m;
    cin>>t;
    while(t--){
        cin>>x>>n>>m;
        m=m *10;
        while(x> (x/2 +10) && n--){
            x = x/2 +10;
        }
        if(x<=m)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
