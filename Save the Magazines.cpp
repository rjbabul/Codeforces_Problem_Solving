#include<bits/stdc++.h>
using namespace std;
#define mx 10005
int main()
{
    string str;
    int t, n;
    cin>>t;
    while(t-- && cin>>n)
    {
        cin>>str;
        int sum =0,x=0 , a[200005];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int cnt=0,mn=mx;
         for(int i=0; i<n; i++)
        {
            if(str[i]=='1')
            {
                cnt++;
                x+= a[i];
                mn=min(mn, a[i]);
            }
            else
            {
               if(i-cnt-1>=0) {x+=a[i-cnt-1]; mn=min(mn, a[i-cnt-1]);}
               else mn=0;
               if(mn!=mx)
               sum= sum+ (x-mn);
               mn=mx;
               cnt=0;

               x=0;
            }
        }
        if(n-cnt-1>=0) {x+=a[n-cnt-1]; mn=min(mn, a[n-cnt-1]);}
        else mn =0;
               if(mn!=mx)
               sum= sum+ (x-mn);
               mn=INT_MAX;
               cnt=0;
               x=0;
        cout<<sum<<endl;
    }
    return 0;
}
