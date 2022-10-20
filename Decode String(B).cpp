#include<bits/stdc++.h>
using namespace std;
int call(string str){
   int num=0;
   for(int i=0;i<str.length();i++){
    num= ((num*10)+(str[i]-'0'));
   }

  return num;
}

int main()
{
    int t,n;
    cin>>t;
    string str;
    while(t-- && cin>>n>>str){
        string st,ans;
        for(int i=n-1;i>=0;i--){
            if(str[i]=='0'){
                st.clear();
                st+=str[i-2];
                st+=str[i-1];
                i-=2;

                ans+= (char)(call(st)+'a'-1);
            }
            else{
                    st.clear();

                      st+= str[i];

                ans+=(char)(call(st)+'a'-1);
            }
        }
        reverse(ans.begin(), ans.end());
        cout<<ans<<endl;
    }
    return 0;
}
