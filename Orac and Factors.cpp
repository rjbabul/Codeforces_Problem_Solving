#include<bits/stdc++.h>
using namespace std;
vector< int > vt[1000004];
void sieve(){
    vt[1].push_back(1);
    vt[2].push_back(2);
    for(int i=2;i<1000002;i++){
        for(int j=i;j<1000002;j+=i) if(vt[j].size()==0) vt[j].push_back(i);
    }


}
int main()
{
    sieve();
    int t, n, k;
    cin>>t;
    while(t--){
            cin>>n>>k;
     cout<<n+vt[n][0] + 2*(k-1)<<endl;
    }
    return 0;
}
