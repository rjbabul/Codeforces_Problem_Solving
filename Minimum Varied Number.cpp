#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t-- && cin>>n)
    {
        int cnt=9;
        string str;
        while(n>cnt)
        {
            str+= (char)(cnt+'0');
            n-=cnt;
            cnt--;
        }
        if(n>0)str+= (char)(n+'0');
        reverse(str.begin(), str.end());
        cout<<str<<endl;
        str.clear();

    }
    return 0;
}
