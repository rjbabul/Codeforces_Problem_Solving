
#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    int l,r,x,f;
    map<int , int> mp;
    while(cin>>l>>r){
            f=0;
        for(int i=l;i<=r;i++){
            x= i;
            while(x){
                mp[x%10]++;
                x/=10;
            }
            int c=0;
            for(int j=0;j<=9;j++){
                if(mp[j]>1) c++;
            }
            if(c==0) {
                cout<<i<<endl;
    f=1;

            break;
            }
            mp.clear();
        }
        if(f==0) cout<<"-1"<<endl;

    }

    return 0;
}
