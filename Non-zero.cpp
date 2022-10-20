#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n, a[1000];
    cin>>t;
    while(t--){
        cin>>n;
        int sum =0, c=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]==0) c++;
        }
        if(sum+c==0) c++;
        cout<<c<<endl;
    }
    return 0;
}
