#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n/k==0)
            cout<<"NO"<<endl;
        else if(n%k==0)
        {
            cout<<"YES"<<endl;
            int r=n/k;
            while(k--)
            {
                cout<<r<<" ";
            }
            cout<<endl;
        }
        else
        {

            vector<int > vt;
            int r=n%k;
            if(r%2!=0 && (k-r)%2!=0)
                cout<<"NO"<<endl;

            else
            {
                if(r%2==0)
                {

                    for(int i=1; i<=k-r; i++)
                    vt.push_back(n/k);
                    for(int i=1;i<=r/2;i++)vt.push_back(n/k +2);
                    for(int i=1;i<=r/2;i++)vt.push_back(n/k );

                }
                else{
                    for(int i=1; i<=(k-r)/2; i++)
                    vt.push_back(n/k+1);
                    for(int i=1; i<=(k-r)/2; i++)
                    vt.push_back(n/k-1);

                    for(int i=0; i<r; i++)
                    vt.push_back(n/k+1);
                }

                int c=0;
                for(int i=0; i<vt.size(); i++)
                    {
                         if(vt[i]==0) c++;
                    }

                if(c>0) cout<<"NO";
                else
                {
                    cout<<"YES"<<endl;
                    for(int i=0; i<vt.size(); i++)
                    {
                         cout<<vt[i]<<"   ";
                    }
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
