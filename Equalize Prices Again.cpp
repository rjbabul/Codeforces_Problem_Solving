#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long int t, n, a[100],avg,sum;
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        avg= sum/n;
        if(sum==(avg*n)) cout<<avg<<endl;
        else cout<<avg+1<<endl;
    }

    return 0;
}

