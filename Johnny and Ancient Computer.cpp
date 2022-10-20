#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b,ans ;
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a==b) cout<<"0"<<endl;
        else if(max(a,b)%min(a,b)!=0) cout<<"-1"<<endl;
        else{

             ans = max(a,b)/min(a,b);
             int c=0;
             while(ans%2!=1){
                c++;
                ans/=2;
             }
             if(ans>1) cout<<"-1"<<endl;
             else{
                if(c%3==0)cout<<c/3<<endl;
                else cout<<c/3+1<<endl;
             }
        }
    }
    return 0;
}
