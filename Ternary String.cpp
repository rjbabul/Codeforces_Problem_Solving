#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        set<char> st;
        int i=1,j;
        int c;
        int ans=INT_MAX;
        n=str.length();
        for(int i=1;i<n;i++ ){

            st.insert(str[i]);
            st.insert(str[i-1]);
            c=2;
            for( j=i+1;j<n;j++){
                c++;
                st.insert(str[j]);
                if(st.size()==3) {
                    for(int k=i;k<=j;k++){
                        if(str[k]==str[k-1]) c--;
                        else break;
                    }
                    ans= min(ans,c);
                    st.clear();
                    break;
                }
            }

             if(j==n-1) break;
        }
        if(ans== INT_MAX) ans =0;
        cout<<ans<<endl;
    }
    return 0;
}
