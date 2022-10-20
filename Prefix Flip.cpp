#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    vector< int > ans;
    int n, t;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        if(a==b){
            cout<<"0"<<endl;
            continue;
        }
        for(int i=1;i<n;i++){
            if(a[i]!= a[i-1]){
                ans.push_back(i);
                a[0]^=1;
            }
        }

        for(int i=n-1;i>=0;i--){
            if(b[i]!=a[0]){
               ans.push_back(i+1);
               a[0]^=1;
            }
        }
        cout<<ans.size() ;
        for(int i=0;i<ans.size();i++){
            cout<<" "<<ans[i];
        }
        cout<<endl;
        ans.clear();
    }
    return 0;
}
