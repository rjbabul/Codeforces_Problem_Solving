#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,x;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0) cout<<n/2<<" "<<n/2<<endl;
        else{
            m= sqrt(n)+1;
            x=1;
            while(1<m){
                if(n%m==0) x=max(x, n/m);
                m--;
            }
            cout<<x<<" "<<n-x<<endl;
        }
    }
    return 0;
}
