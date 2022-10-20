#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b, ans;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        if(n%2==0)ans= n/2;
        else ans = n/2 +1;

        if(n<=a) cout<<n<<endl;
        else  cout<<max(n, (ans-1)/a*b + ans)<<endl;
    }
    return 0;
}
