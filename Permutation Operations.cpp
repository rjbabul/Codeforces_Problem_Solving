#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int  > pi;
int main()
{
    int t, n;
    int a[200005];

    cin>>t;
    while(t-- && cin>>n)
    {
        vector<int > vt;
        priority_queue<pi, vector<pi>, greater<pi> >qu;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
         for(int i=1;i<n;i++)
        {
            if(a[i-1]>a[i])qu.push({a[i-1]-a[i], i});
        }
        int j=1,s;
        while(!qu.empty())
        {
            s=qu.top().first;
            while(s>=0)
            {
                s-= j;
                j++;
                vt.push_back(qu.top().second+1);
            }
            qu.pop();

        }
        while(vt.size()<n)
        {
            vt.push_back(1);
        }
        for(int i=0;i<vt.size();i++)cout<<vt[i]<<" ";cout<<endl;


    }
    return 0;
}
