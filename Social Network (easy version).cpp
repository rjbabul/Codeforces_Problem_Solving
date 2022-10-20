#include<bits/stdc++.h>
#include<map>
#include<map>
using namespace std;
long long int a[2000006];
long long int num[2000006];
int main()
{
    stack<long long int> st;
    map<long long  int,long long int> mp;

    int n,k,c;

    while(cin>>n>>k)
    {
        c=0;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<k; i++)
        {
            if(mp[a[i]]==0)
            {
                st.push(a[i]);
                c++;
                mp[a[i]]=1;
            }
        }

        cout<<c<<endl;
        int j=0;
        while(!st.empty())
        {
            num[j++]= st.top();
            st.pop();
        }
        for(int i=0; i<j; i++)
        {
            cout<<num[i];
            if(i<j-1)
                cout<<" ";
        }
        cout<<endl;
        mp.clear();
    }
    return 0;
}

