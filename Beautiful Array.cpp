#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int t, n,k,b,s;
    cin>>t;
    while(t-- && cin>>n>>k>>b>>s)
    {
        if(k*b>s)
        {
            cout<<-1<<endl;continue;
        }
        if((n-1)*(k-1)+k*(b+1)-1>=s)
        {
            if(k*(b+1)-1>=s)
            {
                for(int i=1;i<n;i++)cout<<0<<" ";
                cout<<s<<endl;
            }
            else{
                cout<<k*(b+1)-1<<" ";
                s-= (k*(b+1)-1);

                for(int i=1;i<n;i++)
                {
                    if(s>=(k-1))
                    {
                        cout<<k-1<<" ";
                        s-= (k-1);
                    }
                    else
                    {
                        cout<<s<<" ";
                        s=0;
                    }
                }
                cout<<endl;
            }
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}
