#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int k,x,y,n;
    int test;
    cin>>test;
    while(test--){
        cin>>x>>y>>n;
         cout<<((n-y)/x)*x  + y<<endl;
    }
    return 0;
}
