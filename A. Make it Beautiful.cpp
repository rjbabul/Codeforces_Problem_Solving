#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n,x;
    cin>>t;
    int j=1;
    while(t-- && cin>>n)
    {
        vector<int> vt;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            vt.push_back(x);
        }
        if(vt[0]!=vt[vt.size()-1])
        {
            cout<<"YES"<<endl;
            cout<<vt[0]<<" ";
            for(int i=vt.size()-1; i>0; i--)
                cout<<vt[i]<<" ";
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
