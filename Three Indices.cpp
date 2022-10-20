#include<bits/stdc++.h>
using namespace std ;
/*
typedef vector<int> vi;

typedef pair<int, int > pi;

#define pi acos(-1)
#define pb push_back
#define mp make_pair
#define fr(i, n) for (i = 1; i <= n; i++)
#define fr0(i, n) for (i = 0; i < n; i++)
#define zero(a) memset(a, 0, sizeof(a))
#define in(a) scanf("%d", &a)
#define mx 100005*/

typedef vector<int> vec;
typedef pair<int, int> pii;

#define pi acos(-1)
#define pb push_back
#define mp make_pair
#define fr(i,n) for(i=1;i<=n;i++)
#define fr0(i,n)for(i=0;i<n;i++)
#define zero(a) memset(a, 0, sizeof(a))
#define in(a) scanf("%d", &a)
#define mx 100005
bool flag =0;



int main()
{
    int t,n,p[mx];
    in(t);
    int jj=1,ii=0,i,k,j;
    fr(jj,t) {
      in(n);
      fr0( ii ,n) in(p[ii]);
       for(  i=0;i<n-2;i++){
        for(  j=i+1;j<n-1;j++){
            if(p[i]<p[j]){
               for(  k=j+1;k<n;k++) if(p[j]>p[k]) {flag =1; break;}
            }
            if(flag==1) break;
        }
        if(flag==1) break;

       }
       if( flag ==0) cout<<"NO"<<endl;
       else cout<<"YES\n"<<i+1<<" "<<j+1<<" "<<k+1<<endl;
       flag =0;
    }


    return 0;
}
