#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, y ;
    cin>>t;
    while(t--){
        cin>>n>>y;
        if(n==y){
            cout<<"YES"<<endl;
            continue;
        }
        if((n<=1 && y>1) ||( n<4 && y>3)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}
