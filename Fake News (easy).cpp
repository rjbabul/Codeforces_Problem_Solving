#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    string st="heidi";
    while(cin>>str){
        int j=0;
        for(int i = 0;i<str.length();i++){
            if(st[j]==str[i])j++;
            if(j==5) break;
        }
        if(j==5)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
