#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a, b;
    cin>>t;
    while(t--){
       cin>>n>>a>>b;
       for(int i=0;i<n;i++){
        ///cout<<(char)(i%b)+97<<endl;
        printf("%c",(i%b)+'a');
       }
       cout<<endl;
    }
    return 0;
}
