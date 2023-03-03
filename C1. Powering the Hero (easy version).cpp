#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    long long int s[200005];
    cin>>t;
    while(t-- && cin>>n)
    {
        for(int i=0;i<n;i++)cin>>s[i];
        priority_queue<long long int > q;
        long long int sum =0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==0)
            {
                if(!q.empty())
                {
                    sum+= q.top();
                    q.pop();
                }
            }
            else q.push(s[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}
