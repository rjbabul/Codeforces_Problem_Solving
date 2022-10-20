#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a,b,c;
    cin>>t;
    while(t--){

        int aa[10];
        cin>>aa[0]>>aa[1]>>aa[2];
        sort(aa, aa+3);
        a=aa[2];
        b=aa[1];
        c=aa[0];
        int ans =0;
        if(a>0){
            ans++;
            a--;
        }
         if(b>0){
            ans++;
            b--;
        }
         if(c>0){
            ans++;
            c--;
        }
        if(a>0 && b>0){
            ans++;
            a--;
            b--;
        }
        if(a>0 && c>0){
            ans++;
            a--;
            c--;
        }
        if(b>0 && c>0){
            ans++;
           b--;
            c--;
        }
        if(a>0 && b>0 && c>0){
            ans++;
            a--;
            b--;
            c--;
        }
        cout<<ans<<endl;

    }
    return 0;
}
