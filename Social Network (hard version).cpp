#include<bits/stdc++.h>
#include<list>
#include<map>
#include<iterator>
#include<queue>
using namespace std;
long long int a[200006];
int main()
{
    list<long long int> st;

    long long  int n,k,c,xx;

    while(cin>>n>>k)
    {
        c=0;
        queue<long long int > q;
        map< long long int, long long int > mp;
        list<long long int>:: iterator it;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
        {

            if(mp[a[i]] ==0 )
            {
                if(st.size()==k)
                {
                    st.pop_back();
                    st.push_front(a[i]);
                    xx = q.front();
                    mp[xx]=0;
                    mp[a[i]]++;
                    q.pop();
                    q.push(a[i]);

                }
                else
                {
                    st.push_front(a[i]);
                    q.push(a[i]);
                    mp[a[i]]++;
                }
            }
        }
        cout<<st.size()<<endl;
        int j=0;
        for(it= st.begin(); it!=st.end(); it++)
        {
            cout<<*it;
            if(j<st.size()-1)
                cout<<" ";
            j++;
        }
        cout<<endl;
        st.clear();

    }
    return 0;
}
