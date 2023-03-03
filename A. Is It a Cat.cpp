#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;

    int t, n;
    cin>>t;
    while(t-- && cin>>n>>str)
    {
        string st="";
        st+= tolower(str[0]);
        map<char, int> mp;
        for(int i=1;i<n;i++)
        {
            char x= tolower(str[i]);
           if(tolower(str[i-1])!=tolower(str[i])) st+=tolower(str[i]);
        }

        if(st=="meow")cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
