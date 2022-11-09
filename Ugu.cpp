#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    string str;
    //freopen("input.txt", "r", stdin);
    cin>>t;
    while(t-- && cin>>n>>str)
    {
        int cnt=0;

        int i=0;
        while(i<n && str[i]=='0') i++;


        for(int j=i+1;j<n;j++)
        {
            if(str[j-1]!=str[j])cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
