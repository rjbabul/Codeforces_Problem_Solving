#include<bits/stdc++.h>
using namespace std;
int main()
{
    string integer, franctinal, str;
    char ch;
    int f=0,fra;
    while(cin>>str)
    {
        f=0;
        int i;
        for(  i=0; i<str.length(); i++)
        {
            if(str[i]=='.')
            {
                f=1;
                continue;
            }
            if(f==0)
                integer+=str[i];
            else
            {
                fra = str[i]-'0';
                break;
            }
        }
        ///cout<<integer<<" "<<fra<<" "<<str[i-2]<<endl;
        int ln = integer.length();
        if(integer[ln-1]=='9') cout<<"GOTO Vasilisa."<<endl;
        else if(fra<5)
            cout<<integer<<endl;
        else if(fra>=5 )
        {
            integer[ln-1]= integer[ln-1]+1;
            cout<<integer<<endl;
        }


        integer.clear();
    }
    return 0;
}
