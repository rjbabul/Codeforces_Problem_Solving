#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string a, b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        int n = a.length();
        int fc=0;

        for(int i=0;i<n; i++){

            if(a[i]!=c[i] && b[i]!=c[i]) {
                fc++;
                break;
            }
        }
        if(fc==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
