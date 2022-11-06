#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t-- && cin>>n)
    {
        int x, mn, temp;
        cin>>temp;
        mn=temp;
        for(int i=1;i<n;i++)
        {
            cin>>x;
            mn=min(mn, x);
        }
        if(mn!=temp) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }

}
