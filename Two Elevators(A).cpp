#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    int t;
    cin>>t;
    while(t-- && cin>>a>>b>>c){
        if(a-1<(abs(b-c)+(c-1))) cout<<1<<endl;
        else if(a-1>(abs(b-c)+(c-1))) cout<<2<<endl;
        else cout<<3<<endl;
    }
    return 0;
}
