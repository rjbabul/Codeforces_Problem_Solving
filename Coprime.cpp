#include<bits/stdc++.h>
using namespace std;
int index[1002];
int gcd(int a, int b)
{

    if(b==0)
        return a;
    return gcd(b, a%b);
}
int main()
{

    int size_=0;

    int n, arr[200005],t,x;
    cin>>t;
    while(t-- && cin>>n)
    {
        size_=0;
        memset(index,0,sizeof(index));
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(index[x]==0)
                arr[size_++]= x;
            index[x]=i+1;
        }

        int mx=-1;
        for(int i=0; i<size_; i++)
        {
            for(int j=0; j<size_; j++)
            {
                if(gcd(arr[i], arr[j])==1)
                    mx=max(mx, index[arr[i]]+ index[arr[j]]);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
