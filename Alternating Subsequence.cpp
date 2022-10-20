#include<bits/stdc++.h>
using namespace std;

long  long int t, n, a[200005],sum, mx;
int main()
{

    cin>>t;
    while(t--){
        cin>>n;


        for(int i=0;i<n;i++)cin>>a[i];
        if(n==1){
            cout<<a[0]<<endl;
            continue;
        }
        if(n==2){
                if((a[1]>0 && a[1-1]>0) || (a[1]<0 && a[1-1]<0))
            cout<<max(a[0],a[1])<<endl;
            else cout<<a[0]+a[1]<<endl;
            continue;
        }
        sum=0;
        mx = a[0];
        for(int i=1;i<n;i++){
            if((mx>0 && a[i]>0) || (a[i]<0 && mx<0))
            {
                mx= a[i]>mx?a[i]:mx;
            }
            else{
                sum+=mx;
                mx=a[i];
            }
        }
           sum+=mx;

        cout<<sum <<endl;

    }
    return 0;
}
