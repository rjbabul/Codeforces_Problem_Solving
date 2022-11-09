#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin>>t;
    int a[301];
    while(t-- && cin>>n)
    {
         int mn = INT_MAX;
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a, a+n);
        for(int i=1;i<n-1;i++)
        {
            mn= min(mn, a[i+1]-a[i-1]);
        }
        cout<<mn<<endl;
    }
    return 0;
}
