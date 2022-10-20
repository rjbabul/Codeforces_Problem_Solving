#include<bits/stdc++.h>
using namespace std;
int  x;

int main()
{
    int n;

    while(cin>>n){
            map<int,int> a;
        for(int i=1;i<n;i++){
            cin>>x;
            a[x]=1;
        }
        for(int i=1;i<=n;i++){

            if(a[i]==0) cout<<i<<endl;
        }
    }
    return 0;
}
