#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,t,a,aa[10000];
    map< int , int > mp;

    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++) {
            cin>>a;
            mp[a]++;
        }

        int flag=0;
        for(int i=0;i<m;i++) cin>>aa[i];

         for(int i=0;i<m;i++) {

            if(mp[aa[i]]>0){
                 cout<<"YES\n1 "<<aa[i]<<endl;
                 flag=1;
                 break;
            }

        }
        if(flag==0)cout<<"NO"<<endl;
        mp.clear();
    }
    return 0;
}

