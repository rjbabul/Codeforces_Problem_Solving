#include<bits/stdc++.h>
using namespace std;

map<int, int> mp;

int call(int a[],int n, int x){
  for(int i=0;i<n;i++){
    if(mp[a[i]^x]==0) return 0;
  }
  return 1;

}
int main()
{
    int t, n, a[1026];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int k=0,i;
         for(  i=1;i<=1024;i++){
            k=call(a, n,i);
            if(k==1) break;
         }
         if(k==0) cout<<"-1"<<endl;
         else
         cout<<i<<endl;
         mp.clear();

    }
    return 0;
}
