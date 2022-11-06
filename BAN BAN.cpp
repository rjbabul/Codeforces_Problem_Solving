#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t-- && cin>>n)
    {

        cout<<(n-1)/2+1<<endl;
        for(int i=1; i<=3*n/2;i+=3)cout<<i<<" "<<3*n-i+1<<endl;
    }
    return 0;
}
