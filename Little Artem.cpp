#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m ;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cout<<"W";
        for(int i=1;i<m;i++) cout<<"B";
        cout<<endl;
        for(int i=1;i<n;i++){
                  for(int j=1;j<=m;j++)cout<<"B";

            cout<<endl;
        }
    }
    return 0;
}
