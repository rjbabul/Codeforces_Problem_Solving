#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n ;
    string x;
    cin>>t;
    while(t--)
    {
        map<string, int > mp,mp1;
        vector<string > vt;
        set<string > st;
        set<string >::iterator it;

        int c=0;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            st.insert(x);
            mp[x]++;
            vt.push_back(x);
            mp1[x]++;
        }
        int ans =0;
        for(it=st.begin(); it!=st.end(); it++)
        {
            ans+=(mp[*it]-1);
        }
        mp.clear();
        for(int i=0; i<vt.size(); i++)
        {
            if(mp[vt[i]]>0 )
            {
                int j=0;
                while(mp[vt[i]]!=0 || mp1[vt[i]]!=0)
                {
                    vt[i][3]=(j++)+'0';
                }
            }
            mp[vt[i]]++;
        }
        cout<<ans<<endl;
        for(int i=0; i<vt.size(); i++)
        {
            cout<<vt[i]<<endl;
        }

    }
    return 0;
}
