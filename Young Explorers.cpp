#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, a[200005];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a+n);
        int group =0, cont=1;
        for(int i=0;i<n;i++){
            if(cont==a[i]){
                group++;
                cont=1;
            }
            else cont++;
        }
        cout<<group<<endl;
    }
    return 0;
}
