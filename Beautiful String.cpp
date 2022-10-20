#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str, st;
    cin>>n;
    while(n--){
        cin>>str;
        int flag=0;
        for(int i=0;i<str.length()-1;i++){
            if(str[i]==str[i+1] && str[i]!='?') flag=1;
        }
        if(flag==1){
            cout<<"-1"<<endl;
            continue;
        }
        int j =0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='?'){
                if(i==0) str[i++]='a';
                while(str[i]=='?') {
                    if(str[i-1]=='c') str[i]= 'a';
                    else {
                        str[i]=str[i-1]+1;

                    }
                    i++;
                }

                if(str[i]==str[i-1] && str[i]<'c') str[i-1]= str[i]+1;
                else if(str[i]==str[i-1] && str[i]=='c'){
                        if(str[i-2]=='b')
                    str[i-1]='a';
                else str[i-1]='b';

                }
            }
        }
        cout<<str<<endl;
    }
    return 0;
}
