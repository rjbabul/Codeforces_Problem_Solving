#include<bits/stdc++.h>
using namespace std;
typedef pair< int, int > pi;
int main()
{
    int t, n;
    cin>>t;
    while(t-- && cin>>n)
    {
        priority_queue<pi, vector<pi> , greater<pi> >  st;
        long long int a;
        long long int b[n];
        long long  mx= 0,sum=0;
        for(int i=0;i<n;i++){
            cin>>a;
            sum+= a;
        }
        for(int i=0;i<n;i++){
            cin>>a;
            sum+= a;
            mx=max(mx, a);
        }

        cout<<sum-mx<<endl;

    }
    return 0;
}
