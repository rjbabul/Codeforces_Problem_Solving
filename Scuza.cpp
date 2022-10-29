#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int l, int r, int x, int size_)
{
    if(l<r)
    {
        int mid= (l+r)/2;
        if(arr[mid]==x)return binary_search(arr, mid+1, size_, x, size_);
        else if(arr[mid]>x) return binary_search(arr, l, mid, x, size_);
        else return binary_search(arr, mid+1,r, x, size_);
    }
    return l-1;
}
int main()
{
    int t, n,q;
    cin>>t;
    while(t-- && cin>>n>>q)
    {
        long long int sum [n+2],x;
        int  max_leg[n+2],mx=0;
        memset(sum, 0, sizeof(sum));
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            sum[i]+= sum[i-1]+x;
            mx= (mx<x?x:mx);
            max_leg[i]=mx;
        }
        for(int i=1;i<=q;i++)
        {
            cin>>x;
            int pos= binary_search(max_leg, 1,n+1, x, n+1);
            cout<<sum[pos]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
