#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a[100005],s[100005];
    cin>>t;
    while(t--){
            s[0]=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            s[i]=1;
        }
        for(int i=1;i<=n;i++){

            for(int j= i*2; j<=n;j+=i){

                if(a[i]<a[j]) s[j]= max(s[j], s[i]+1);
            }
        }
        sort(s, s+n+1);
        cout<<s[n]<<endl;
    }
    return 0;
}
