#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    while(cin>>a>>b>>c>>d>>e>>f){
            int cost=0,ma,mb;
            ma = min(a,d);
            mb = min( b, min(c,d));
            if(f>e){
                cost+= f*mb;
                d= d-mb;
                ma= min(a,d);
                cost+= e*ma;
            }
            else{
                cost+= e*ma;
                d-= ma;
                mb= min(b,min(c,d));
                cost+= f*mb;
            }
            cout<<cost<<endl;

    }
    return 0;
}
