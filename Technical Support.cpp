#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    string str;
    cin>>t;
    while(t-- && cin>>n>>str)
    {
        int q=0, a=0;
        int flag= 0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='Q') q++;
            else a++;
            if(a>q)a--;
        }
        if(q>a ) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}
