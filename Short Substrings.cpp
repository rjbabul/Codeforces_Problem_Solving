#include<bits/stdc++.h>
using namespace std;
int main()
{
    string  str;

    int t;
    cin>>t;
    while(t--){
        cin>>str;
        vector<string > vt;
        for(int i=0;i<str.length()-1;i+=2){
            string st;
            st+=str[i];
            st+= str[i+1];
            vt.push_back(st);

        }
        string ans;

        ans+=vt[0];
        for(int i=1;i<vt.size();i++){
            if(ans[ans.length()-1]!= vt[i][0]){
                ans+=vt[i];
            }
            else ans+=vt[i][1];
        }


        cout<<ans<<endl;

    }

    return 0;
}
