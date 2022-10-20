#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, t;
    cin>>t;
    while(t--){
            int sum=0, x;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>x;
            sum+=x;
        }
        if(sum>=m)cout<<m<<endl;
        else cout<<sum<<endl;

    }
    return 0;
}
