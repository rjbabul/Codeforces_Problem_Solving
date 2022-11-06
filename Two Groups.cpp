#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t-- && cin>>n)
    {
        int a;
        long long int neg=0, pos=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a<0) neg+=a;
            else pos+=a;
        }
        cout<<llabs(llabs(pos)- llabs(neg))<<endl;

    }
    return 0;
}
