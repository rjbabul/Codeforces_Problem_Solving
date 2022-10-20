#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string str;
    cin>>t;

    while(t-- && cin>>str){
        vector<int > vt[27];
        for(int i=0;i<str.length(); i++){
            vt[str[i]-'a'].push_back(i+1);
        }
        int m=0, n=0;
        int l =0, r=0;
        l=(str[0]-'a');
        r= (str[str.length()-1]-'a');
        m = abs(l-r);
        vector<int > st;
        if(l<r)
        for(int i=l;i<=r; i++){
                n+= vt[i].size();
            for(int j=0;j<vt[i].size();j++){
                st.push_back(vt[i][j]);
            }
        }
         else
        for(int i=l;i>=r; i--){
                n+= vt[i].size();
            for(int j=0;j<vt[i].size();j++){
                st.push_back(vt[i][j]);
            }
        }
        cout<<m<<" "<<n<<endl;
        for(int i=0;i<st.size();i++)cout<<st[i]<<" ";cout<<endl;
    }
    return 0;
}
