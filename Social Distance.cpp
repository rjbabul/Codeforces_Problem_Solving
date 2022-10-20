#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    string str;
    cin>>t;
    while(t--){
        cin>>n>>k>>str;
        int ans=0, c=k;
        for(int i=0;i<n;i++){
            if(str[i]=='0'){
                c++;
            }
            else{
                c-=k;
                ans+= c/(k+1);
                c=0;
            }
        }
        ans+= c/(k+1);
        cout<<ans<<endl;

    }
    return 0;
}
