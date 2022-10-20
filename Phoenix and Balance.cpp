#include<bits/stdc++.h>
using namespace std;
int a[31];
void sieve()
{
    for(int i=1; i<=30; i++)
        a[i]=1;
    for(int i=1; i<=30; i++)
    {
        for(int j=i; j<=30; j++)
            a[j]*=2;
    }

    ///  for(int i=1;i<=30;i++) cout<<i<<"   "<<a[i]<<endl;


}
int main()
{
    sieve();
    int t, n, st[100];
    int l=0, r=0;
    cin>>t;
    while(t--)
    {
        l=r=0;
        cin>>n;
        if(n==2)
            cout<<a[2]-a[1]<<endl;

        else
        {
            int i=1;
            l+=a[n];
            for( ;i<= (n-1)/2;i++) l+=a[i];
            for( ;i<n;i++) r+=a[i];
            cout<<abs(r-l)<<endl;

        }

    }


    return 0;
}
