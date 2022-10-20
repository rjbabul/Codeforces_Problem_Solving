#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t, n, a[10000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int mt=0, ma=0, mb=0, ca=0, cb=0;
        int i=0, j=n-1;
        ma+= a[0];
        ca+=ma;
        int sta=1;
        mt=1;
        for(  i=1,j=n-1; i<=j; )
        {

            if(sta==1)
            {
                mt++;
                while(i<=j && mb<=ma)
                {
                    mb+=a[j--];

                }

                cb+=mb;
                ma=0;
                sta=0;
            }
            else
            {
                mt++;
                while(i<=j && mb>=ma)
                {
                    ma+=a[i++];

                }

                ca+= ma;
                mb=0;
                sta=1;
            }

        }

        cout<<mt<<" "<<ca<<" "<<cb<<endl;
    }
    return 0;
}
