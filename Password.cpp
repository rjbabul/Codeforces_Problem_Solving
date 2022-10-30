#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    int a[10];
    cin>>t;
    while(t-- && cin>>n)
    {

        memset(a, 0, sizeof(a));
        int cnt=0,x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(a[x]==0){cnt++; a[x]++;}
        }
        cnt= 10-cnt;
        cout<<(cnt*(cnt-1))/2*6<<endl;
    }
    return 0;
}
