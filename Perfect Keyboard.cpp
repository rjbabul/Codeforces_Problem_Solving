#include<bits/stdc++.h>
using namespace std;
string p="abcdefghijklmnopqrstuvwxyz";
int main()
{
    int t,c;
    string str, st;
    cin>>t;
    while(t--)
    {
        st.clear();
        cin>>str;
        int j=0;
        st+= str[0];
        map<char, int > mp;
        mp[st[0]]++;

        int flag=0;
        for(int i=1; i<str.length(); i++)
        {
            if(st[j]==str[i])
                continue;
            if(mp[st[j]]==1)
            {

                if(j==0 )
                {

                    if(st.length()>1 )
                    {
                        if(st[j+1]==str[i])
                            j++;
                        else
                        {
                            mp[st[j]]++;
                            string t= st;
                            st.clear();
                            st+= str[i];
                            st+=t;
                            mp[str[i]]++;
                        }
                    }

                    else
                    {

                        st+= str[i];

                        j++;
                        mp[str[i]]++;
                    }
                }
                else
                {

                    if(st[j-1]==str[i])
                        j--;

                    else
                    {
                        st+= str[i];
                        mp[st[j]]++;
                        j++;

                        mp[str[i]]++;

                    }
                }
                //   cout<<"j   "<<j<<"    "<<st[j]<<endl;

            }
            else if(mp[st[j]]==2)
            {

                if(st[j-1]== str[i])
                    j--;
                else if(st[j+1]==str[i])
                    j++;
                else
                {
                    flag=1;
                    break;
                }
            }
            else
            {
                flag=1;
                break;
            }
        }
        set<char> s;
        map<char, int > m;


        for(int i=0; i<st.length(); i++)
        {
            s.insert(st[i]);
            m[st[i]]++;
        }
        if(flag==1 || (s.size()<st.size()))
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<st;
            for(int i=0; i<26; i++)
            {
                if(mp[p[i]]==0)
                    cout<<p[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
