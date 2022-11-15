
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t,ans,x;
    cin>>t;
    while(t-- && cin>>n)
    {
        string str;
        cin>>str;
       long long int o =0, z=0, cnt0=0, cnt1=0;
        long long int mx= 0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='1')
            {
                o++;
                cnt1++;
                mx= max(mx, cnt1*cnt1);
                mx= max(mx, cnt0*cnt0);
                cnt0=0;
            }

             else
            {
                z++;
                cnt0++;
                mx= max(mx, cnt1*cnt1);
                mx= max(mx, cnt0*cnt0);
                cnt1=0;
            }
        }
         mx= max(mx, cnt1*cnt1);
         mx= max(mx, cnt0*cnt0);
         mx=max(mx, z*o);

         cout<<mx<<endl;
    }
    return 0;
}
