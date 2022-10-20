#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a[100003], b[100003];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        int i1=0, i2=n-1;
        while(a[i1]==b[i1])
            i1++;
        if(i1==n)
        {
            cout<<"YES"<<endl;
            continue;
        }
        while(a[i2]==b[i2])
            i2--;
        int k = b[i1]-a[i1];
        if(k<0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int flag=0;
        for(int i=i1; i<= i2; i++)
        {
            if(a[i]+k!=b[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}

