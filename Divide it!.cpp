#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--){
        cin>>n;
        int flag=0,c=0;
        while(n!=1){
            if(n%2==0)n= n/2;
            else if(n%3==0) n= (2*n)/3;
            else if(n%5==0) n=(4*n)/5;
            else {
                flag=1;
                break;
            }
            c++;
        }
        if(flag==1) cout<<"-1"<<endl;
        else
        cout<<c<<endl;
    }
    return 0;
}
