#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int c=0;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]) c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
