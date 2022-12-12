#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    string str;

    int n , k;
    cin>>n;
    while(n-- && cin>>str>>k)
    {
        int pos = k;
        int ans = str.length()-k;
        string st;
        char ch='9';
       for(int i= pos;i>=0;i--)
                {
                    if(str[i]<=ch && str[i]!='0')
                    {
                        ch= str[i];
                        pos=i;
                    }
                }

        int l= pos+1;
        int r= k+1;
        st+= str[pos];
        ans--;
        while(ans--)
        {
            ch='9';
              for(int i= l;i<=r && ;i++)
                {
                    if(str[i]<ch )
                    {
                        ch= str[i];
                        pos=i;
                        l=i+1;
                    }
                }

                r++;
                st+= ch;
        }

        cout<<st<<endl;

    }
    return 0;
}
