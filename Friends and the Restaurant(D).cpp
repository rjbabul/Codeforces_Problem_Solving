#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    long long int a[100004], b[100005];
    cin>>t;
    while(t-- && cin>>n){
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int m =0;
        for(int i=0;i<n;i++){
            cin>>b[i];
            b[i]-=a[i];
            if(b[i]>=0)m++;
        }
        sort(b,b+n);
        int cnt=0,sum=0;
        for(int i=n-m-1, j=n-m;i>=0 && j<n;i--){
            sum=b[i];
            while(j<n && sum+b[j]<0){

                j++;
            }
           if(sum+b[j]>=0 && j<n) {cnt++; m--;}
            j++;

        }
        cout<<cnt+(m/2)<<endl;
    }
    return 0;
}
