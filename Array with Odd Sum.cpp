#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, x, sum ;
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;
        int e=0, o=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x%2==0) e++;
            else o++;
        }
        if(o==0 || (e==0 && o%2==0))cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
