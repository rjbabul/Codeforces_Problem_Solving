#include<Bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int n, t,m, a[100005],b[200005];
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while(t-- && cin>>n>>m)
    {

        map<int, int > mp;
        set<int>st;
        set<int>::iterator it;
        priority_queue<int   > q;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
            st.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }

        sort(b, b+m);
        for(it= st.begin(); it!=st.end();it++)
        {
            q.push(mp[*it]);
        }
        int ans =0,x;
         for(int i=m-1;i>=0;i--)
         {
             if(q.empty())break;

             x= q.top();

             q.pop();
             ans+=min(x, b[i]);
             if(x>b[i])
             {
              x-= b[i];
              q.push(x);
             }
         }

        cout<<ans<<endl;


    }
    return 0;
}
