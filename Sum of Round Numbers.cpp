#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int > vt;
        int p=1;
        int r;
        while(n){
            r=n%10;
            if(r>0)vt.push_back(r*p);
            p*=10;
            n/=10;
        }
        cout<<vt.size()<<endl;
        for(int i=0;i<vt.size();i++){
                cout<<vt[i];
        if(i<vt.size()-1) cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
