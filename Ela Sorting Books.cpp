#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    int t,n, k;
    string str,ans;
    int ch[27];
    cin>>t;

    while(t-- && cin>>n>>k>>str)
    {
        memset(ch,0, sizeof(ch));
        ans.clear();
        for(int i=0;i<n;i++)
        {
            ch[str[i]-'a']++;
        }

        for(int i=0;i<k;i++)
        {
            int j;
            for(j=0;ch[j] && j<n/k;j++)
            {
                ch[j]--;
            }
            cout<<(char)(j+'a');
        }

        cout<<endl;
    }
    return 0;
}
