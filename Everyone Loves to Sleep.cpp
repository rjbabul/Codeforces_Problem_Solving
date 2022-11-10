#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n,h,m;
    cin>>t;
    while(t-- && cin>>n>>h>>m)
    {
        int mnh=25, mnm=65;

        int x ,y,ah, am;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;

            if(y>=m) am= y-m;
        else {am= 60+y-m; x--;}

        if(x>=h) ah= x-h;
        else ah= x+24-h;

        if(mnh>ah)
        {
            mnh = ah;
            mnm= am;
        }
        else if( mnh==ah)
        {
            if(mnm>am)
            {
                 mnh = ah;
                 mnm= am;
            }
        }

        }

        cout<<mnh<<" "<<mnm<<endl;

    }
    return 0;
}

