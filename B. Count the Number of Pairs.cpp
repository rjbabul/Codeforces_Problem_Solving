#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int t, n, k;
    cin>>t;
    while(t-- && cin>>n>>k>>str)
    {
        map<char, int> chap, smal;
        int ans =0;
        for(int i=0;i<n;i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                if(chap[toupper(str[i])]>0)
                {
                    ans++;
                    chap[toupper(str[i])]--;
                }
                else smal[str[i]]++;
            }
            else{
                 if(smal[tolower(str[i])]>0)
                {
                    ans++;
                    smal[tolower(str[i])]--;
                }
                else chap[str[i]]++;
            }
        }
        while(k)
        {
            int s=k;
            for(int i=0;i<26 && k>0;i++)
            {
                char l = (char) ('a'+i);
                char u = (char)('A'+i);

                if(chap[u]>=2)
                {
                    chap[u]-=2;
                    ans++; k--;

                }

                if(smal[l]>=2)
                {
                    smal[l]-=2;
                    ans++; k--;

                }

            }
            if(s==k)break;
        }
        cout<<ans<<endl;
    }
    return 0;
}
