#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t-- && cin>>n)
    {
        if(n==1)
        {
            cout<<n<<endl;
            continue;
        }
        if(n==3){
            cout<<-1<<endl;
            continue;
        }
        if(n%2==0)
        {
            while(n--)
                cout<<n+1<<" ";cout<<endl;
        }
        else
        {
            cout<<n-1<<" "<<n<<" ";
            for(int i=1;i<=n-2;i++)cout<<i<<" ";cout<<endl;
        }
    }
    return 0;
}
