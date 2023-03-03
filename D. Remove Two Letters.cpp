#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t , n;
    cin>>t;
    string str;
    while(t-- && cin>>n)
    {
        cin>>str;
        int cnt=1;
        for(int i=0;i<n-2;i++)
        {
            if(str[i]!=str[i+2])cnt++;
        }
        cout<<cnt<<endl;

    }
    return 0;
}
