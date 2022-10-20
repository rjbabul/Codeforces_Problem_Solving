#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s;
    string str;

    while(cin>>str)
    {
        t=0;
        s=0;
        t= str.find("AB");
        s= str.find("BA");
       /// cout<<t<<"  "<<s;
    if((t!=-1 && str.find("BA", t+2)!=-1) ||( s!=-1 && str.find("AB", s+2)!=-1) )cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}
