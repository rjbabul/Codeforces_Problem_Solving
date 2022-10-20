#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t, n, a[1000], b[1000];
    cin>>t;
    while(t--){
        cin>>n;
        int aa=INT_MAX, bb= INT_MAX;

        for(int i=0;i<n;i++){
            cin>>a[i];
            aa= min(aa, a[i]);
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            bb= min(bb, b[i]);
        }
      long long  int sum =0;
        for(int i=0;i<n;i++){
          sum+= max(a[i]-aa, b[i]-bb);
        }
        cout<<sum<<endl;
    }
    return 0;
}
