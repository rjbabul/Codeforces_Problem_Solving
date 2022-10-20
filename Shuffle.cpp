#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,k,l,r,c,d,m;

    int t;
    cin>>t;
    while(t--)
    {

        cin>>n>>x>>m;
        l=x;
        r=x;
        for(int i=1;i<=m;i++){
            cin>>c>>d;
            if((l>=c && l<=d)|| (r>=c && d>=r)){
                l= min(l,c);
                r=max(r,d);
            }
        }
      ///  cout<<l<<"l   r"<<r<<endl;
        cout<<r-l+1<<endl;

    }
    return 0;
}
