#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a1,b1,a2,b2;
    cin>>t;
    while(t--){
        cin>>a1>>b1;
        cin>>a2>>b2;
        if(min(a1,b1)+ min(a2,b2) == max(a1,b1) && max(a1,b1)==max(a2,b2)) cout<<"Yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
