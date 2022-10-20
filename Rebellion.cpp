#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n, t;
    cin>>t;
    int a[200005];
    while(t-- && cin>>n)
    {

        for(int i=0;i<n;i++) cin>>a[i];
        int l=0, r=n-1, cnt=0;
        while(l<r)
        {
            while(r>l && a[r]==1)r--;
            while(l<r && a[l]==0)l++;
            if(l<r){
               cnt++, l++,r--;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
