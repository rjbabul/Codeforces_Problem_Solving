#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str, st;
    int t;
    cin>>t;
    while(t-- && cin>>str>>st)
    {
        if(str[str.length()-1]== st[st.length()-1])
        {

           if(str[str.length()-1]=='S'  && str.length()<st.length()) cout<<">"<<endl;
           else if(st[st.length()-1]=='L' && str.length()>st.length()) cout<<">"<<endl;
           else if(str.length() == st.length()) cout<<"="<<endl;
           else cout<<"<"<<endl;
           continue;
        }
        if(str[str.length()-1]=='S' && st[st.length()-1]=='M') cout<<"<"<<endl;
        else if(str[str.length()-1]=='S' && st[st.length()-1]=='L') cout<<"<"<<endl;
        else if(str[str.length()-1]=='M' && st[st.length()-1]=='L') cout<<"<"<<endl;
        else cout<<">"<<endl;

    }
    return 0;
}
