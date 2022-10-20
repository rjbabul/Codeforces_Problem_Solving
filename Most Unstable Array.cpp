#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
     int n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;

        cout<<m*(min(n-1,2))<<endl;
    }
    return 0;
}
