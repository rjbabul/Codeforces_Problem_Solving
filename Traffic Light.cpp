#include<bits/stdc++.h>
using namespace std;
int binary_s(vector<int > vt, int l  , int r, int x)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        if(vt[mid]==x) return vt[l]-x;
        else if(vt[mid]>x) return binary_s(vt, l, mid, x);
        else  return binary_s(vt, mid+1,r, x);
    }

    return vt[l]-x;
}
int main()
{
    int t,n;
    char ch;
    string str;
    cin>>t;
    while(t-- && cin>>n>>ch>>str)
    {
        vector<int > vt;
        str+=str;
        for(int i=0; i<str.length(); i++)
            if(str[i]=='g')vt.push_back(i);

        sort(vt.begin(), vt.end());

        int mx=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==ch)
            {
                mx=max(mx, binary_s(vt,0,vt.size()-1,i));
            }
        }
        cout<<mx<<endl;

    }

    return 0;
}
