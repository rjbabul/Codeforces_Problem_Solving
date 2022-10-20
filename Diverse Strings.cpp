#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        int flag=1;
       sort(str.begin(), str.end());
       for(int i=1;i<str.length();i++){
        if(str[i]-str[i-1]!=1)flag=0;
       }
       if(flag==1) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
    }
    return 0;
}
