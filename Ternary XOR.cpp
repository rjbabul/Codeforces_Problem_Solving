#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    string str;
    cin>>t;
    while(t--){
        cin>>n>>str;
        string s,t ;
        int i;
        for(  i = 0 ; i<n;i++){
            if(str[i]=='2') {
                s+='1';
                t+='1';
            }
            else if(str[i]=='1'){
                t+='1';
                s+='0';
                break;
            }
            else {
                s+=str[i];
                t+=str[i];
            }
        }
        i++;
        for(int j=i;j<n;j++) t+='0';
        for(int j=i;j<n;j++) s+=str[j];
        cout<<t<<endl<<s<<endl;
        t.clear();
        s.clear();

    }
    return 0;
}
