#include<bits/stdc++.h>
using namespace std;
#define mx 1000000000000
int main()
{
    long long int n;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        int c=0;
        while(n>1 && n<=mx){
            if(n==2) break;
            if(n%6==0) n= n/6;
            else n=n*2;
            c++;
        }
        if(n==1)cout<<c<<endl;
        else cout<<"-1"<<endl;
        c=0;
    }

    return 0;
}
