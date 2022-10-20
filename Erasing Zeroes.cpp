#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int t;
    cin>>t;
    while(t--)
    {
        int c=0,ans=0;
        cin>>str;
        int i=0;
        while(str[i]!='1' && i<str.length()) i++;

        for(int j=i+1;j<str.length(); j++){
            if(str[j]=='0') c++;
            else{
                ans+=c;
                c=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
