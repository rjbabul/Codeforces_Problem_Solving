#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a[5002], b[5002],e,o;
    cin>>t;
    while(t--){
        cin>>n;
        e=o=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i],b[i]==0?e++:o++;

        int flag=0;
        for(int i=1;i<n;i++) {
            if(a[i]<a[i-1]) flag+=1;
        }
        if(flag>0 &&(e==0 || o==0)) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}
