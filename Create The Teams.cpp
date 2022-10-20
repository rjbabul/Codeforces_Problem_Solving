#include<bits/stdc++.h>
using namespace std;
#define mx 100005
typedef long long int ll ;
ll a[mx];
int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll   t, n,x;
    cin>>t;
    for(int j=1; j<=t;j++){
        cin>>n>>x;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a, a+n);
        int c=0, f=1;
        for(int i=n-1;i>=0;i--){
            if(a[i]*f>=x){
                f=1;
                c++;
            }
            else f++;
        }
        cout<<c<<endl;

    }
    return 0;
}
