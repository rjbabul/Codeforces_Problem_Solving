#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void heapify(ll a[], int n,int at)
{
    int mn = at;
    int l= at*2+1;
    int r= at*2+2;
    if(l <n && a[l]>a[mn])mn=l;
    if(r<n && a[r]>a[mn]) mn=r;

    if(at!=mn)
    {
        swap(a[mn], a[at]);
        heapify(a, n, mn);
    }
}
void heapsort(ll a[], int n)
{
    for(int i=n/2-1;i>=0;i--) heapify(a, n, i);
    for(int j=n-1;j>0;j--)
    {
        swap(a[0], a[j]);
        heapify(a, j, 0);
    }
}
int main()
{
    int t, n;
    cin>>t;
    while(t-- && cin>>n)
    {
       long long  int a[n+1];
        long long int x, y,sum=0;
        for(int i=0;i<n;i++)
        {
             cin>>x>>y;
             sum+= (x+y)*2;
             a[i]= max(x,y);
        }
        heapsort(a, n);
        for(int i=n-1;i>=1;i--)
        {
            sum-= (min(a[i], a[i-1])*2);
        }
        cout<<sum<<endl;
    }
}
