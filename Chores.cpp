#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a,b;
    long long int aa[2005];
    while(cin>>n>>a>>b){
        for(int i=0;i<n;i++)cin>>aa[i];
        sort(aa, aa+n);
        cout<<aa[b]-aa[b-1]<<endl;
    }
    return 0;
}
