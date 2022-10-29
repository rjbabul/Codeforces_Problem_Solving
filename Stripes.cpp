#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        int flag= 0;
        for(int i=0;i<8;i++)
        {
            cin>>str;
            if(str=="RRRRRRRR") flag=1;
        }

         if(flag) cout<<"R"<<endl;
         else cout<<"B"<<endl;

    }
    return 0;
}
