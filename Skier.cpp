#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        int ans=0;
        set< pair<int, int > > st;
         int a=0,b =0;
        for(int i=0; i<str.length(); i++)
        {
            int st1=a, st2= b;
            if(str[i]=='E')a++;
            else if(str[i]=='W') a--;
            else if(str[i]=='N') b++;
            else b--;
            if(st.count(make_pair(st1+a, st2+b) )==0){
                st.insert(make_pair(st1+a, st2+b));
                ans +=5;
            }
            else ans +=1;

        }
        cout<<ans<<endl;
    }
    return 0;
}
