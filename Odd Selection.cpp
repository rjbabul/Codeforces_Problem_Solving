#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, e, o , x, n,d;
    cin>>t;
    while(t--){
        cin>>n>>d;
        e=o=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x%2==0) e++;
            else o++;
        }
        if(o==0) cout<<"No"<<endl;
        else if(e==0){
            if(d%2==0) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
       else if(d==(e+o)){
            if(o%2==0) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
