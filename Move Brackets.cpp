#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        stack<char> q;
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') q.push(s[i]);
            else{
                    if(!q.empty()) q.pop();
            else c++;

            }
        }
        cout<<c<<endl;
    }

    return 0;
}
