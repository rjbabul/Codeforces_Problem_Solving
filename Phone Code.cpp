#include<bits/stdc++.h>
using namespace std;
char a[30004][22];
int main()
{
    int n,ln;
    string str;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>str;
        ln = str.length();
        for(int j=0; j<ln; j++)
        {
            a[i][j]=str[j];
        }
    }
    int f=0,i,c=0;
    for(  i=0; i<ln && f==0; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(a[j][i]!=a[j+1][i])
            {
                f=1;
                break;
            }
        }
        if(f==1)
            break;
        c++;

    }
    cout<<c<<endl;
    return 0;
}
