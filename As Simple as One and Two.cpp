#include<bits/stdc++.h>
using namespace std;
string one="one";
string two="two";
int main()
{
    int n;
    string str;
    cin>>n;
    while(n--){
        vector<int> vt;
        cin>>str;
        string st;
        int c=0;
        for(int i=0;i<str.length();i++){
            if(i+2>str.length()) break;
            if((str[i]=='o' && str[i+1]=='n' && str[i+2]=='e')|| (str[i]=='t' && str[i+1]=='w' && str[i+2]=='o')){
                if(i+4<str.length() && str[i+3]=='n' && str[i+4]=='e'){
                     vt.push_back(i+3);
                }
                else vt.push_back(i+2);
                i+=2;
            }
        }
        cout<<vt.size()<<endl;
        for(int i=0;i<vt.size();i++){
             cout<<vt[i];
             if(i<vt.size()-1)cout<<" ";


        }cout<<endl;
    }
    return 0;
}
