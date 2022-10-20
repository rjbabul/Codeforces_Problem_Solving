#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, x;
    cin>>t;
    while(t--){
        cin>>n;


        map<int , int > mp;
        set<int > st;
        set<int > ::iterator it;
        for(int i=0;i<n;i++){
            cin>>x;

            st.insert(x);
            mp[x]++;
        }
        int mx =0, ans = st.size();
        for(it= st.begin(); it!=st.end();it++){
            mx= max(mx, mp[*it]);
        }
        if(ans==mx) cout<<mx-1<<endl;
        else if(ans>mx) cout<<mx<<endl;
        else cout<<ans<<endl;


    }
    return 0;
}
