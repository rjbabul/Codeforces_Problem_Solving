#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    string str;
    map<char, int > mp;

    while(cin>>n>>k)
    {
        mp.clear();
        cin>>str;
        char ch;
        for(int i=1;i<=k;i++){
            cin>>ch;
            mp[ch]++;
        }
      long long   int c=0,ans=0;
        for(int i=0;i<str.length();i++){
            if(mp[str[i]]>0) c++;
            else{
                ans+= (c*c + c)/2;
                c=0;
            }
        }
        if(c>0) ans+= (c*c + c)/2;
        cout<<ans<<endl;
    }
    return 0;
}
